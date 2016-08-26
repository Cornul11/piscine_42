/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processing_functions.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:22:42 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/14 16:27:20 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROCESSING_FUNCTIONS_H
# define FT_PROCESSING_FUNCTIONS_H

int		ft_checkrow(int row, int num);
int		ft_checkcolumn(int column, int num);
int		ft_checkgrid(int row, int column, int num);
void	ft_next(int row, int column);
void	ft_solvesudoku(int row, int column);

#endif
