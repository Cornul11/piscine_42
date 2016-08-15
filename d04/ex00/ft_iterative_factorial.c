/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 13:36:34 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/09 16:53:32 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int total;

	i = 0;
	total = 1;
	if (nb < 1)
		return (0);
	while (i < nb)
	{
		i++;
		total *= i;
	}
	return (total);
}
