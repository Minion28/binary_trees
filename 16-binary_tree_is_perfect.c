#include "binary_trees.h"

/**
 * tree_is_perfect - function that checks if tree is perfect or not
 * it has to have the same quantity of levels in left as right, and also
 * each node has to have 2 nodes or none.
 * @tree: check tree
 * Return: 0 if is not a perfect, other number that is the level of height
 */

int tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + tree_is_perfect(tree->left);
		right = 1 + tree_is_perfect(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - perfect tree
 * @tree: check tree
 * Return: 1 if it is, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = tree_is_perfect(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}