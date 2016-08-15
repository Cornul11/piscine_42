/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 13:54:57 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/11 19:51:23 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*k;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	k = (int*)malloc(sizeof(*k) * (max - min));
	if (k != NULL)
		while (min < max)
		{
			k[i] = min;
			min++;
			i++;
		}
	return (k);
}
