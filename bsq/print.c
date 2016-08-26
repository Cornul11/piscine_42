/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inour <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 20:55:15 by inour             #+#    #+#             */
/*   Updated: 2016/08/24 20:55:24 by inour            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_map(t_map *map)
{
	int	x;
	int	y;

	x = 0;
	if (!map)
		return ;
	while (x < map->nb_lines)
	{
		y = 0;
		while (y < map->nb_col)
		{
			ft_putchar(map->map[x][y]);
			y++;
		}
		ft_putstr("\n");
		x++;
	}
}
