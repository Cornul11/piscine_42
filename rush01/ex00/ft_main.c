/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:03:10 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/14 20:46:25 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main.h"
#include "ft_storing_showing.h"
#include "ft_processing_functions.h"
#include "ft_extra.h"

int		main(int argc, char **argv)
{
	if (ft_check_input(argc, argv) == 0)
		return (0);
	if (ft_count_num_amount(argc, argv) < 17)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_copy_sudoku(argc, argv);
	ft_solvesudoku(0, 0);
	if (!g_found_solution)
	{
		ft_putstr("Error\n");
	}
	return (0);
}
