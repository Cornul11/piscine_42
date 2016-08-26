/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 12:17:26 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/19 12:18:38 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree *a;

	a = root;
	if (a->left)
		btree_apply_infix(a->left, applyf);
	applyf(a->item);
	if (a->right)
		btree_apply_infix(a->right, applyf);
}
