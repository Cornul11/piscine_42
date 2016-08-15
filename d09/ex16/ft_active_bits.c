/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 15:03:00 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/12 15:18:55 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_active_bits(int value)
{
	int i;
	int res;

	res = 0;
	i = (sizeof(int) * 8) - 1;
	while (i >= 0)
	{
		if (value & (1u << i))
			res += 1;
		i--;
	}
	return (res);
}
