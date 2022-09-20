#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of binary tree
 * @tree: check tree
 * Return: height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			right = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((left > right) ? left : right);
	}
}

/**
 * binary_tree_balance - Measures balance factor of binary tree
 * @tree: check tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0; 
	int left = 0;
	int sub = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		sub = left - right;
	}
	return (sub);
}
