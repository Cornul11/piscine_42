/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 22:38:39 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/09 11:37:46 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alpha(char c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))
			|| ((c >= '0') && (c <= '9')))
		return (1);
	else
		return (0);
}

int		ft_num(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_alpha(str[i]) && !ft_alpha(str[i - 1]))
		{
			if (!ft_num(str[i]))
				str[i] = str[i] - ' ';
		}
		else if (ft_alpha(str[i]) && ft_alpha(str[i - 1]))
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				str[i] = str[i] + ' ';
			}
		}
		i++;
	}
	return (str);
}
