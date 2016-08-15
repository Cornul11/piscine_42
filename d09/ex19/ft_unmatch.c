/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:18:25 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/12 16:25:28 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_unmatch(int *tab, int length)
{
	int i;
	int local_i;
	int found;

	local_i = 0;
	while (local_i < length)
	{
		i = 0;
		found = 0;
		while (i < length)
		{
			if (i != local_i)
				if (tab[i] == tab[local_i])
				{
					found = 1;
					break ;
				}
			i++;
		}
		if (!found)
			return (tab[local_i]);
		local_i++;
	}
	return (tab[local_i]);
}
