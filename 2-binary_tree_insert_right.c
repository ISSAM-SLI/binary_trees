#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserting a new binary tree node on the right.t
 * @parent: The parent node to which the new node will be added.
 * @value: The value to be stored in the new node.
 * Return: pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
	}
	else
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;

	return (new);
}
