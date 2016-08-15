/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 16:48:19 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/11 16:42:47 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_args_length(int argc, char **argv)
{
	int i;
	int j;
	int length;

	i = 1;
	length = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			j++;
			length++;
		}
		length++;
		i++;
	}
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*local_string;
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	local_string = (char *)malloc(sizeof(char) * ft_args_length(argc, argv));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			local_string[k] = argv[i][j];
			j++;
			k++;
		}
		i++;
		if (i == argc)
			local_string[k++] = '\0';
		else
			local_string[k++] = '\n';
	}
	return (local_string);
}
