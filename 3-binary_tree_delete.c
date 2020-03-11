#include "binary_trees.h"
/**
 * binary_tree_delete-Deleting nodes from a binary tree
 * @tree: Is the pointer to the tree that will be releases
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
