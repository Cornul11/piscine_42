/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 11:36:39 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/15 11:55:43 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int num;
	int i;

	i = 0;
	num = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			num++;
		i++;
	}
	return (num);
}