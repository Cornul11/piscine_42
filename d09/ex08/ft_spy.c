/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 04:29:35 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/12 09:59:34 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_find_forbidden_words(char *str)
{
	if (ft_strcmp(str, "president") == 0)
		ft_putstr("Alert !!!\n");
	if (ft_strcmp(str, "attack") == 0)
		ft_putstr("Alert !!!\n");
	if (ft_strcmp(str, "powers") == 0)
		ft_putstr("Alert !!!\n");
}

void	ft_tolowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	local_string[1000];
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				local_string[k] = argv[i][j];
				k++;
			}
			j++;
		}
		local_string[j] = '\0';
		ft_tolowercase(local_string);
		ft_find_forbidden_words(local_string);
		i++;
	}
	return (0);
}
