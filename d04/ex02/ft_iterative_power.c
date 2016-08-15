/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 16:19:27 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/09 16:52:54 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int total;

	i = power;
	total = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i > 0)
	{
		i--;
		total *= nb;
	}
	return (total);
}
