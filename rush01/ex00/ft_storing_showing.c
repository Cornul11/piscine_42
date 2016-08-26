/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_storing_showing.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:49:00 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/14 20:45:35 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main.h"
#include <unistd.h>
#include "ft_processing_functions.h"

int		ft_check(int row, int column, int counter)
{
	if ((ft_checkrow(row, counter) == 1) &&
			(ft_checkcolumn(column, counter) == 1) &&
			(ft_checkgrid(row, column, counter) == 1))
		return (1);
	else
		return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_check_input(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if ((argv[i][j] >= '1' && argv[i][j] <= '9') || argv[i][j] == '.')
			{
				j++;
				continue;
			}
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_copy_sudoku(int argc, char **argv)
{
	int index;
	int s_index;
	int j;

	index = 1;
	s_index = 0;
	while (index < argc)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[index][j] >= '1' && argv[index][j] <= '9')
				g_sudoku_arr[s_index][j] = argv[index][j] - '0';
			else
				g_sudoku_arr[s_index][j] = 0;
			j++;
		}
		index++;
		s_index++;
	}
}

void	ft_print_sudoku(int sudoku[N][N])
{
	int i;
	int j;
	int c;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			c = sudoku[i][j] + 48;
			write(1, &c, 1);
			if (j < 8)
				write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
