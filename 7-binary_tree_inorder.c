#include "binary_trees.h"
/**
 * binary_tree_inorder-Traverse de tree in a in order mode
 * @tree: Is the input tree
 * @func: Is the input function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
