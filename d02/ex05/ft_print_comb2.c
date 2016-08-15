/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 21:47:17 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/04 21:58:59 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_int(int n)
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

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = -1;
	while (x++ < 98)
	{
		y = x;
		while (y++ < 99)
		{
			ft_print_int(x);
			ft_putchar(' ');
			ft_print_int(y);
			if ((x != 98) || (y != 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
