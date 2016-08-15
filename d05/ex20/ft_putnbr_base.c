/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 16:45:14 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/09 17:38:12 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		count_letter(char c, char *str)
{
	int		count;
	char	*ptr;

	count = 0;
	ptr = str;
	while (*ptr)
	{
		if (*ptr == c)
			count++;
		ptr++;
	}
	return (count);
}

int		find_error(char *base)
{
	char	*ptr;

	ptr = base;
	if (ft_strlen(base) < 2)
		return (0);
	while (*ptr)
	{
		if (*ptr == '+' || *ptr == '-')
			return (0);
		if (count_letter(*ptr, base) > 1)
			return (0);
		ptr++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_int;
	int i;
	int de_inversat[1024];

	i = 0;
	base_int = ft_strlen(base);
	if (!find_error(base))
		return ;
	while (nbr > 0)
	{
		de_inversat[i] = nbr % base_int;
		nbr = nbr / base_int;
		i++;
	}
	while (--i >= 0)
	{
		ft_putchar(base[de_inversat[i]]);
	}
	ft_putchar('\n');
}
