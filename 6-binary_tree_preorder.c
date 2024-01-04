#include "binary_trees.h"
/**
 * binary_tree_preorder - Performs pre-order traversal on a binary tree.
 * @tree: The root of the binary tree to traverse.
 * @func: A function to be called on each visited node.
 * Return: None.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
