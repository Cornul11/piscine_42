#include <stdio.h>


void	print_preorder(t_btree *tree)
{
	if (tree)
	{
		printf("%s \n", tree->item);
		print_preorder(tree->left);
		print_preorder(tree->right);
	}
}

int		main(void)
{
	print_preoder(btree_create_node("asd"));
	return (0);
}
