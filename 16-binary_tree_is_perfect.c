#include "binary_trees.h"
/**
 * binary_tree_is_perfect-function that checks if a binary tree is perfec
 * @tree: Is the pointer to the binary tree
 * Return: If is perfect 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left_h = binary_tree_is_perfect(tree->left);
	right_h = binary_tree_is_perfect(tree->right);

	if (left_h == right_h)
		return (1);
	return (0);
}
