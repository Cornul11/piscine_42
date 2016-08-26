/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 18:50:33 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/14 19:56:24 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int	match(char *s1, char *s2)
{
	if (!ft_strcmp(s1, s2))
		return (1);

	return (0);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d ", match(argv[1], argv[2]));
	return (0);
}
