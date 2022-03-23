#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the node to measure the depth.
 * Return: the depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *tmp = NULL;
	size_t depth = 0;

	if (!tree)
		return (0);
	tmp = tree;
	while (tmp->parent)
	{
		depth++;
		tmp = tmp->parent;
	}
	return (depth);
}
