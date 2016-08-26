/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 11:43:26 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/19 12:15:04 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree *a;

	a = root;
	applyf(a->item);
	if (a->left)
		btree_apply_prefix(a->left, applyf);
	if (a->right)
		btree_apply_prefix(a->right, applyf);
}
