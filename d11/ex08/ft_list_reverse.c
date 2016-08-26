/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 17:56:13 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/16 18:11:02 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*temporary1;
	t_list	*temporary2;

	list = *begin_list;
	temporary1 = NULL;
	if (!list || !(list->next))
		return ;
	temporary1 = list->next;
	temporary2 = temporary1->next;
	list->next = NULL;
	temporary1->next = list;
	while (temporary2)
	{
		list = temporary1;
		temporary1 = temporary2;
		temporary2 = temporary2->next;
		temporary1->next = list;
	}
	*begin_list = temporary1;
}
