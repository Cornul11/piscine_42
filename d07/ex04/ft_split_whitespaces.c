/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 19:03:27 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/11 19:19:10 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_countwords(char *str)
{
	int i;
	int words;
	int spaced;
	int worded;

	i = 0;
	words = 0;
	spaced = 1;
	worded = 0;
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') && !worded)
		{
			worded = 1;
			spaced = 0;
			words++;
		}
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && !spaced)
		{
			worded = 0;
			spaced = 1;
		}
		i++;
	}
	return (words);
}

int		ft_getloc(int i, char *str, int *tab)
{
	int spaced;
	int worded;
	int beg;

	beg = 0;
	spaced = 1;
	worded = 0;
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') && !worded)
		{
			worded = 1;
			beg = i;
			while (str[i] != ' ' && str[i] != '\n'
					&& str[i] != '\t' && str[i] != '\0')
				i++;
			tab[0] = (i - beg);
			break ;
		}
		i++;
	}
	return (beg);
}

char	**ft_split_whitespaces(char *str)
{
	char	**local_string;
	int		i;
	int		j;
	int		k;
	int		tab[1];

	i = 0;
	local_string = (char**)malloc(sizeof(char*) * (ft_countwords(str) + 1));
	while (i < ft_countwords(str))
	{
		k = 0;
		j = ft_getloc(j, str, tab);
		local_string[i] = (char*)malloc(sizeof(char) * (tab[0] + 1));
		while (k < tab[0])
		{
			local_string[i][k] = str[j++];
			k++;
		}
		local_string[i][k] = '\0';
		i++;
	}
	local_string[ft_countwords(str) + 1] = 0;
	return (local_string);
}
