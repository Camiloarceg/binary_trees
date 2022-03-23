#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of
 *							 another node.
 * @parent: the parent node.
 * @value: the n.
 * Return: pointer to the new child or NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->parent = parent;
	if (parent->right)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
		parent->right = new_node;
	}
	else
		parent->right = new_node;
	return (new_node);
}
