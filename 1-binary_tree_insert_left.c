#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds node to the left of the parent
 * @parent: parent node
 * @value: node value
 * Return: NULL if it fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	lnode = binary_tree_node(parent, value);
	if (lnode == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		lnode->left = parent->left;
		parent->left->parent = lnode;
	}
	parent->left = lnode;
	return (lnode);
}