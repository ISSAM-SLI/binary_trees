#include "binary_trees.h"
/**
 * binary_tree_inorder - Performs an in-order traversal on a binary tree.
 * @tree: The root of the binary tree to traverse.
 * @func: A function to be called on each visited node.
 * Return: None.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left != NULL)
			binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right != NULL)
			binary_tree_inorder(tree->right, func);
	}
}
