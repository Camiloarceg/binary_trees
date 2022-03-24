#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: the binary tree.
 * Return: the leaves in the tree.-
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t ll = 0, rl = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	ll = binary_tree_leaves(tree->left);
	rl = binary_tree_leaves(tree->right);
	return (ll + rl);
}
