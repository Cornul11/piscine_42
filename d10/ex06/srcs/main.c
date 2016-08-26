/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:39:31 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/16 10:18:18 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putnbr.h"
#include "ft_count.h"
#include "ft_operations.h"

int					(*g_optab[5])(int n1, int n2);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int	i;
	int	negativ;
	int	number;

	i = 0;
	negativ = 0;
	number = 0;
	while ((str[i] > 0) && (str[i] <= 31))
		i++;
	if (str[i] == '-')
		negativ = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += ((int)str[i] - '0');
		i++;
	}
	if (negativ == 1)
		return (-number);
	else
		return (number);
}

int		check_args(char *sign, char *num2)
{
	if (sign[1])
		return (0);
	else if (sign[0] != '+' && sign[0] != '-' && sign[0] != '/'
			&& sign[0] != '*' && sign[0] != '%')
		return (0);
	else if (sign[0] == '/' && ft_atoi(num2) == 0)
		return (-1);
	else if (sign[0] == '%' && ft_atoi(num2) == 0)
		return (-2);
	return (1);
}

int		main(int argc, char **argv)
{
	char *num1;
	char *num2;
	char *sign;

	g_optab[0] = &add;
	g_optab[1] = &sub;
	g_optab[2] = &multiply;
	g_optab[3] = &div;
	g_optab[4] = &mod;
	if (argc != 4)
		return (0);
	num1 = argv[1];
	num2 = argv[3];
	sign = argv[2];
	ft_count(num1, sign, num2);
	return (0);
}
