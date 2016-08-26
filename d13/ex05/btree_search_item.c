/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 13:58:04 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/19 15:38:17 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (data_ref == root->item)
			return (root);
		else if ((*cmpf)(data_ref, root->item) < 0)
		{
			return (btree_search_item(data_ref, root->left, cmpf));
		}
		else
		{
			return (btree_search_item(data_ref, root->right, cmpf));
		}
	}
	return (NULL);
}
