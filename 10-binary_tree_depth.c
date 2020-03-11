#include "binary_trees.h"
/**
 * binary_tree_depth-function that measures the depth in a binary tree
 * @tree: Is the ponter to the binary tree
 * Return: The depth of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth_node;

	if (!tree || !tree->parent)
		return (0);

	depth_node = binary_tree_depth(tree->parent);
	return (depth_node + 1);
}
