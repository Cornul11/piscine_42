/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 12:08:44 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/16 19:09:05 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp_list;

	if (*begin_list)
	{
		tmp_list = ft_create_elem(data);
		tmp_list->next = *begin_list;
		*begin_list = tmp_list;
	}
	else
		*begin_list = ft_create_elem(data);
}
