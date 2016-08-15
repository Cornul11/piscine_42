/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 02:35:01 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/12 03:38:19 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_button(int i, int j, int k)
{
	if ((i >= j && k <= j) || (k >= j && i <= j))
		return (j);
	else if ((j >= i && k <= i) || (k >= i && j <= i))
		return (i);
	else if ((j >= k && i <= k) || (i >= k && j <= k))
		return (k);
	return (j);
}
