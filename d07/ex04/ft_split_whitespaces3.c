/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 10:55:00 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/11 19:08:39 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_showarray(char **str, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < k)
	{
		while (str[i][j] != '\0')
		{
			ft_putchar(str[i][j]);
			j++;
		}
		i++;
	}
}*/

int		ft_charscount(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\t' || str[i] != '\n' || str[i] != ' ')
			k++;
		i++;
	}
	return (k);
}

char **ft_split_whitespaces(char *str)
{
	char **local_string;
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	local_string = (char **)malloc(ft_charscount(str) * sizeof(char));
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		
			local_string[k][j] = str[i];
			i++;
			j++;
		}
		else
		{
			k++;
			i++;
			j = 0;
			local_string[k][j] = str[i];
		}
	}
	return (local_string);
}

int main()
{
	ft_split_whitespaces("asd asd a    asd asd  asdd");
	return (0);
}
