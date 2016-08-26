/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 12:07:47 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/17 20:25:31 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include "ft_errors.h"
#define BUF_SIZE 30720

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (i < ft_strlen(str))
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_stdin(void)
{
	char	buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

void	ft_showfiles(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		i;
	char	buf[BUF_SIZE + 1];

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDWR);
		if (fd == -1)
		{
			ft_putstr("ft_cat: ");
			ft_putstr(argv[i]);
			ft_putstr(": ");
			ft_printerror(errno);
		}
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
		close(fd);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc < 2 || argv[1][0] == '-')
		ft_stdin();
	ft_showfiles(argc, argv);
	return (0);
}
