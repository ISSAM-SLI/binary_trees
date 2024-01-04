#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserting a new binary tree on the left
 * @parent: parent node
 * @value: The value to be stored in the new node.
 * Return: A pointer to the newly added node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}

	return (new);
}
