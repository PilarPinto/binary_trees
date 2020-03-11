#include "binary_trees.h"
/**
 * binary_tree_height -function that measures the height of a binary tree
 * @tree: Is a pointer to the root node
 * Return: If tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}

/**
 * binary_tree_balance - Measure load balance
 * @tree: The input tree
 * Return: The balance of nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	return (left_h - right_h);
}
