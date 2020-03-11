#include "binary_trees.h"
/**
 * binary_tree_insert_left- Insert a left node
 * @parent:Is the ponter to the curent parent node
 * @value: Is the value in the current node
 * Return: The node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = malloc(sizeof(binary_tree_t));

	if (!n_node)
	{
		return (NULL);
	}
	n_node->parent = parent;
	n_node->n = value;
	n_node->left = parent->left;
	if (n_node->left != NULL)
	{
		n_node->left->parent = n_node;

	}
	parent->left = n_node;

	return (n_node);
}
