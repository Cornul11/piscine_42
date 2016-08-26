/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 15:35:19 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/18 20:36:41 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_printerror(int code)
{
	if (code == 2)
		ft_putstr("No such file or directory\n");
	else if (code == 13)
		ft_putstr("Permission denied\n");
	else if (code == 21)
		ft_putstr("Is a directory\n");
}
