#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds node to the right of the parent
 * @parent: parent node
 * @value: node value
 * Return: NULL if fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	rnode = binary_tree_node(parent, value);
	if (rnode == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		rnode->right = parent->right;
		parent->right->parent = rnode;
	}
	parent->right = rnode;
	return (rnode);
}