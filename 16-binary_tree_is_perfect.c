#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect -checks if tree is perfect.
 * @tree: the tree.
 * Return: 1 is perfect 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		return (1);
	return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: the tree.
 * Return: the size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (!tree)
		return (0);
	lh = binary_tree_size(tree->left);
	rh = binary_tree_size(tree->right);
	return (lh + rh + 1);
}
