/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 15:54:05 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/12 16:53:06 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_join(char **tab, char *sep)
{
	char	*local_str;
	int		i;
	int		j;
	int		k;
	int		l;

	local_str = malloc(1000);
	i = 0;
	k = 0;
	l = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j] != '\0')
			local_str[k++] = tab[i][j++];
		while (sep[l] != '\0')
			local_str[k++] = sep[l++];
		i++;
	}
	local_str[i] = '\0';
	return (local_str);
}
