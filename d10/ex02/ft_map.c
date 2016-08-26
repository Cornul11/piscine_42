/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 10:39:19 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/15 11:35:40 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*local_tab;
	int i;

	local_tab = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		local_tab[i] = f(tab[i]);
		i++;
	}
	return (local_tab);
}
