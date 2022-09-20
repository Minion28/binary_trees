#include "binary_trees.h"

/**
 * binary_tree_leaves - return number of leaves in a tree
 * @tree: check tree
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sum = 0;
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		sum = left + right;
		return ((!left && !right) ? sum + 1 : sum + 0);
	}
}
