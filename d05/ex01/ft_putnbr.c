/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inttostr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 10:30:20 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/08 21:46:59 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_strinverse(char *str)
{
	char	inversed[11];
	int		i;
	int		j;

	i = ft_strlen(str);
	j = 0;
	while (i-- >= 0)
	{
		inversed[j] = str[i];
		j++;
	}
	ft_putstr(inversed);
}

void	ft_putzero(void)
{
	ft_putchar('0');
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	int		rest;
	int		i;
	char	temp_string[11];

	i = 0;
	if (nb == 0)
	{
		ft_putzero();
		return ;
	}
	else if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	while (nb != 0)
	{
		rest = nb % 10;
		temp_string[i] = rest + '0';
		nb = nb / 10;
		i++;
	}
	ft_strinverse(temp_string);
}
