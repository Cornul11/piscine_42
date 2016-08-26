/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 12:20:26 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/19 12:23:07 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	t_btree *a;

	a = root;
	if (a->left)
		btree_apply_suffix(a->left, applyf);
	if (a->right)
		btree_apply_suffix(a->right, applyf);
	applyf(a->item);
}
