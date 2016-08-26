/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inour <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 20:55:36 by inour             #+#    #+#             */
/*   Updated: 2016/08/24 20:55:39 by inour            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_map	*read_from_fd(int fd)
{
	t_map	*map;
	char	buff[BUFF_SIZE + 1];
	int		r;
	char	*str;
	char	*tmp;

	map = (t_map *)malloc(sizeof(t_map) * 1);
	str = (char *)malloc(sizeof(char) * 1);
	if (!map || !str)
		exit_error("Malloc error");
	while ((r = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[r] = '\0';
		tmp = ft_strcat(str, buff);
		free(str);
		str = tmp;
	}
	if (get_nb_lines(str, map) <= 0)
		return (NULL);
	get_map_chars(str, map);
	if (check_map_chars(map) == 0
		|| get_map(str, map) == 0
		|| check_nb_lines(str, map) == 0)
		return (NULL);
	return (map);
}

t_map	*read_from_file(char *file)
{
	t_map	*map;
	int		fd;

	map = NULL;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		print_error(file, "No such file");
	else
	{
		map = read_from_fd(fd);
		check_errors(file, map);
		close(fd);
	}
	return (map);
}
