#include "binary_trees.h"
/**
 * binary_tree_size-measures the size of a binary tree
 * @tree: Is the pointer to the binary tree
 * Return: Tje size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_l, size_r, total;

	if (!tree)
		return (0);

	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);
	total = size_l + size_r;
	return (total + 1);
}
