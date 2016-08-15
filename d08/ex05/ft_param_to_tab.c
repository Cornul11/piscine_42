/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 15:10:34 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/13 15:58:33 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>
#include "ft_split_whitespaces.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char				*ft_strcpy(char *src)
{
	int		i;
	char	*local_str;

	local_str = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		local_str[i] = src[i];
		i++;
	}
	local_str[i] = '\0';
	return (local_str);
}

void				ft_tab_init(struct s_stock_par *tab, char *str)
{
	tab->size_param = ft_strlen(str);
	tab->str = str;
	tab->copy = ft_strcpy(str);
	tab->tab = ft_split_whitespaces(str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*rs;
	int					i;

	i = 0;
	rs = (struct s_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		ft_tab_init(&rs[i], av[i]);
		i++;
	}
	rs[i].str = 0;
	return (rs);
}
