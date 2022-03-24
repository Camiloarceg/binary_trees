#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: the tree.
 * Return: 1 if full 0 if not.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_child = 0, right_child = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left_child = binary_tree_is_full(tree->left);
	right_child = binary_tree_is_full(tree->right);
	if (left_child == right_child)
		return (1);
	return (0);
}
