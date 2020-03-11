#include "binary_trees.h"
/**
 * binary_tree_insert_right-Inser node right
 * @parent: Is the pointer to the current parent node
 * @value: Is the value
 * Return: The node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (!parent)
		return (NULL);
	n_node = malloc(sizeof(binary_tree_t));
	if (!n_node)
	{
		return (NULL);
	}
	n_node->parent = parent;
	n_node->n = value;
	n_node->left = NULL;
	n_node->right = parent->right;
	if (n_node->right != NULL)
	{
		parent->right->parent = n_node;

	}
	parent->right = n_node;

	return (n_node);
}
