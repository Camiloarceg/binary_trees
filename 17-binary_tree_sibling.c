#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: all binary tree
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *node_parent = NULL;

	node_parent = node->parent;
	if (node == NULL)
		return (NULL);
	if (!node_parent)
		return (NULL);
	if (node == node_parent->left)
	{
		if (node_parent->right)
			return (node_parent->right);
	}
	else
	{
		if (node_parent->left)
			return (node_parent->left);
	}
	return (NULL);
}
