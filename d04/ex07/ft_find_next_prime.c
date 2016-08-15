/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 18:09:02 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/06 20:13:54 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	k;

	k = 0;
	i = 1;
	while (++i <= nb)
	{
		if (nb <= 3 && nb > 1)
		{
			k = 1;
			break ;
		}
		if (((nb % i) == 0) && (i != nb))
		{
			k = 0;
			break ;
		}
		k = 1;
	}
	return (k);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	n = nb;
	if (ft_is_prime(n) == 1)
		return (n);
	else
	{
		while (!ft_is_prime(n))
		{
			n++;
		}
		return (n);
	}
}
