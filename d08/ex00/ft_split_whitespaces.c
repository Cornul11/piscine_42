/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 12:48:38 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/13 13:34:40 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int g_s[10005];
int g_f[10005];

char	*ft_strdup(char *src)
{
	char	*local_string;
	int		i;

	i = 0;
	while (src[i])
		i++;
	local_string = (char*)malloc(sizeof(*src) * (i + 2));
	i = 0;
	while (src[i])
	{
		local_string[i] = src[i];
		i++;
	}
	local_string[i] = ' ';
	local_string[i + 1] = '\0';
	return (local_string);
}

int		get_max(char *str)
{
	int		i;
	int		k;
	int		t;
	int		len;
	char	*temp;

	temp = ft_strdup(str);
	k = 0;
	t = 0;
	i = -1;
	len = 0;
	while (temp[++i])
		if (temp[i] == ' ' || temp[i] == '\n' || temp[i] == '\t')
		{
			t = k;
			k = i;
			if (t < k)
			{
				g_s[len] = t;
				g_f[len] = k;
				len++;
			}
			k++;
		}
	return (len);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ret;
	int		k;
	int		i;

	i = -1;
	ret = (char **)malloc(sizeof(char *) * (get_max(str) + 1));
	while (++i < get_max(str))
	{
		k = 0;
		ret[i] = (char *)malloc(sizeof(char *) * (g_f[i] - g_s[i] + 1));
		while (g_s[i] < g_f[i])
		{
			ret[i][k] = str[g_s[i]];
			k++;
			g_s[i]++;
		}
		ret[i][k + 1] = '\0';
	}
	ret[i] = (char *)malloc(sizeof(char *) * 1);
	ret[i] = 0;
	return (ret);
}
