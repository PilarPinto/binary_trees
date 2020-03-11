#include "binary_trees.h"
/**
 * binary_tree_nodes-counts the nodes with at least 1 child
 * @tree: Is the pointer to the binary tree
 * Return: The number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c = 0;

	if (!tree)
		return (0);

	c += binary_tree_nodes(tree->left);
	c += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		c++;

	return (c);
}
