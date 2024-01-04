#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the number of nodes.
 * @tree: Pointer to the root of the binary tree.
 * Return: The number of nodes in the binary tree .
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		counter += binary_tree_nodes(tree->left) + 1
			+ binary_tree_nodes(tree->right);
	return (counter);
}
