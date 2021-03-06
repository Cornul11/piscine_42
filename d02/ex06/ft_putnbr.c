/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 22:27:25 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/04 22:27:32 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int n)
{
	char n1;
	char n2;

	n1 = '0';
	n2 = '0';
	if (n > 9)
	{
		n1 = n / 10 + 48;
		n2 = n % 10 + 48;
	}
	else
	{
		n1 = '0';
		n2 = n + 48;
	}
	ft_putchar(n1);
	ft_putchar(n2);
}
