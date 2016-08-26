/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 20:21:55 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/24 20:26:18 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	t_map	*map;
	int		i;

	i = 1;
	if (argc < 2)
	{
		ft_stdin();
	}
	else
	{
		while (i < argc)
		{
			map = read_from_file(argv[i]);
			get_map_square(map);
			print_map(map);
			free_map(map);
			i++;
		}
	}
	return (0);
}
