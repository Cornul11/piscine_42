/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 14:07:03 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/12 14:45:28 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_arrsize(char **tab)
{
	int i;

	i = 0;
	if (tab[i] != 0)
		i++;
	return (i);
}

int	ft_compact(char **tab, int length)
{
	int i;
	int k;
	int j;

	length = 0;
	i = 0;
	while (tab[i])
	{
		if (tab[i] == 0)
		{
			k = 0;
			while (tab[i + k + 1])
			{
				j = 0;
				while (tab[i + k + 1][j])
				{
					tab[i + k][j] = tab[i + k + 1][j];
					j++;
				}
				k++;
			}
		}
		i++;
	}
	return (ft_arrsize(tab));
}
