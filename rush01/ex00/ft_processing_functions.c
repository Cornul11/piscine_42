/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processing_functions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:09:01 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/14 18:36:41 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main.h"
#include "ft_storing_showing.h"
#include "ft_processing_functions.h"

int		ft_checkrow(int row, int num)
{
	int column;

	column = 0;
	while (column < 9)
	{
		if (g_sudoku_arr[row][column] == num)
			return (0);
		column++;
	}
	return (1);
}

int		ft_checkcolumn(int column, int num)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (g_sudoku_arr[row][column] == num)
			return (0);
		row++;
	}
	return (1);
}

int		ft_checkgrid(int row, int column, int num)
{
	int l_row;
	int l_column;

	row = (row / 3) * 3;
	column = (column / 3) * 3;
	l_row = 0;
	while (l_row < 3)
	{
		l_column = 0;
		while (l_column < 3)
		{
			if (g_sudoku_arr[row + l_row][column + l_column] == num)
				return (0);
			l_column++;
		}
		l_row++;
	}
	return (1);
}

void	ft_next(int row, int column)
{
	if (column < 8)
		ft_solvesudoku(row, column + 1);
	else
		ft_solvesudoku(row + 1, 0);
}

void	ft_solvesudoku(int row, int column)
{
	int counter;

	if (row > 8)
	{
		ft_print_sudoku(g_sudoku_arr);
		g_found_solution = 1;
		return ;
	}
	if (g_sudoku_arr[row][column] != 0)
		ft_next(row, column);
	else
	{
		counter = 1;
		while (counter <= 9)
		{
			if (ft_check(row, column, counter))
			{
				g_sudoku_arr[row][column] = counter;
				ft_next(row, column);
			}
			counter++;
		}
		g_sudoku_arr[row][column] = 0;
	}
}
