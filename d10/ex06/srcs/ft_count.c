/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 15:05:41 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/16 10:19:05 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"
#include "main.h"
#include "ft_operations.h"

int		(*what_op(char *op))(int n1, int n2)
{
	int i;

	i = 0;
	while (OPERATORS[i] != op[0])
		i++;
	return (g_optab[i]);
}

void	do_op(int num1, int num2, int (*op)(int, int))
{
	ft_putnbr(op(num1, num2));
}

void	ft_count(char *num1, char *sign, char *num2)
{
	if (check_args(sign, num2) == 1)
		do_op(ft_atoi(num1), ft_atoi(num2), what_op(sign));
	else if (check_args(sign, num2) == -1)
		ft_putstr("Stop : division by zero");
	else if (check_args(sign, num2) == -2)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putzero();
}
