/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 09:26:14 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/20 19:33:54 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "eval.h"

char	*g_expression;

int		ft_evaluator1(void)
{
	int	res;

	res = ft_evaluator2();
	while (*g_expression == '+' || *g_expression == '-')
	{
		if (*g_expression == '+')
		{
			++g_expression;
			res += ft_evaluator2();
		}
		else if (*g_expression == '-')
		{
			g_expression++;
			res -= ft_evaluator2();
		}
	}
	return (res);
}

int		ft_evaluator2(void)
{
	int res;

	res = ft_chars_ints_parser();
	while (*g_expression == '*' || *g_expression == '/' || *g_expression == '%')
	{
		if (*g_expression == '*')
		{
			g_expression++;
			res *= ft_chars_ints_parser();
		}
		else if (*g_expression == '/')
		{
			g_expression++;
			res /= ft_chars_ints_parser();
		}
		else if (*g_expression == '%')
		{
			g_expression++;
			res %= ft_chars_ints_parser();
		}
	}
	return (res);
}

int		ft_chars_ints_parser(void)
{
	int res;

	res = 0;
	if (*g_expression == '(')
	{
		g_expression++;
		res = ft_evaluator1();
		g_expression++;
	}
	else
		while (*g_expression >= '0' && *g_expression <= '9')
		{
			res = res * 10 + *g_expression - '0';
			g_expression++;
		}
	return (res);
}

int		eval_expr(char *str)
{
	int i;
	int without_spaces;

	i = 0;
	without_spaces = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			without_spaces++;
		i++;
	}
	g_expression = (char *)(malloc(sizeof(char) * (without_spaces + 1)));
	i = 0;
	without_spaces = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			g_expression[without_spaces] = str[i];
			without_spaces++;
		}
		i++;
	}
	g_expression[without_spaces] = '\0';
	return (ft_evaluator1());
}
