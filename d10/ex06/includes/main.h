/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:54:55 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/16 10:18:49 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# define OPERATORS "+-*/%"

void	ft_putchar(char c);
int		ft_atoi(char *str);
int		check_args(char *sign, char *num2);
int		(*g_optab[5])(int n1, int n2);

#endif
