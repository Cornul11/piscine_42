/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 11:53:05 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/04 22:01:55 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char zcode;
	char acode;
	char i;

	zcode = 'a';
	acode = 'z';
	i = zcode;
	while (i <= acode)
	{
		ft_putchar(i);
		i++;
	}
}
