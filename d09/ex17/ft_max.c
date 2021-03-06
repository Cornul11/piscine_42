/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 15:21:29 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/12 16:31:43 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int res;
	int i;

	i = 0;
	res = tab[0];
	while (i < length)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}
