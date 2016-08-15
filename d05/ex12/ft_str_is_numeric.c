/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 10:13:41 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/09 10:57:33 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_num(char c)
{
	if (((c >= '0') && (c <= '9')))
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!ft_num(str[i]))
			return (0);
		i++;
	}
	return (1);
}
