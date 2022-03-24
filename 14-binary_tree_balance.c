#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: the pointer to tree.
 * Return: the balancing factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lh = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rh = binary_tree_height(tree->right) + 1;
	return (lh - rh);
}

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the height or NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return (lh > rh ? lh + 1 : rh + 1);
}
