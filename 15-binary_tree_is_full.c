#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, and 0 otherwise. If the node is NULL, return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - Checks if a binary tree is a full binary tree.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
