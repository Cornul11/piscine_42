/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 21:39:16 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/07 20:30:15 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_first_line(int x)
{
	int local_x;

	local_x = x + 1;
	while (--local_x)
	{
		if (local_x == x)
			ft_putchar('/');
		else if (local_x == 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	ft_putchar('\n');
}

void	write_last_line(int x)
{
	int local_x;

	local_x = x + 1;
	while (--local_x)
	{
		if (local_x == x)
			ft_putchar('\\');
		else if (local_x == 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	ft_putchar('\n');
}

void	write_middle_lines(int x)
{
	int local_x;

	local_x = x + 1;
	while (local_x--)
	{
		if ((local_x == 1) || (local_x == x))
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int local_x;
	int local_y;

	local_x = x + 1;
	local_y = y + 1;
	if (x == 0 | y == 0)
		return ;
	while (--local_y)
	{
		if (local_y == y)
			write_first_line(x);
		else if (local_y == 1)
			write_last_line(x);
		else if ((local_y != 1) && (local_y != y))
			write_middle_lines(x);
	}
}
