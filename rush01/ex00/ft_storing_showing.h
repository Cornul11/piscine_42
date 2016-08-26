/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_storing_showing.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:56:58 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/14 18:39:08 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STORING_SHOWING_H
# define FT_STORING_SHOWING_H
# include "ft_main.h"
# include <unistd.h>

void	ft_putstr(char *str);
void	ft_copy_sudoku(int argc, char **argv);
void	ft_print_sudoku(int sudoku[N][N]);
int		ft_check_input(int argc, char **argv);
int		ft_check(int row, int column, int counter);

#endif
