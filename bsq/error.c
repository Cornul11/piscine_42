/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 20:38:39 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/24 20:44:58 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	check_errors(char *str, t_map *map)
{
	if (!map && str)
		print_error(str, "map error");
	else if (!map)
		print_error(NULL, "map error");
}

void	print_error(char *file, char *error)
{
	if (file)
	{
		ft_puterrorstr(file);
		ft_puterrorstr(" : ");
	}
	ft_puterrorstr(error);
	ft_puterrorstr("\n");
}

void	exit_error(char *error)
{
	print_error(NULL, error);
	exit(1);
}
