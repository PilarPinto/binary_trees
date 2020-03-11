#include "binary_trees.h"
/**
 * binary_tree_uncle-finds the uncle of a node
 * @node:Is the node that will be cheked
 * Return: The uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent || !node->parent ||
		!node->parent->parent->right || !node->parent->parent->left)
		return (0);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
