#include "binary_trees.h"
size_t binary_tree_depth2(const binary_tree_t *tree);
/**
 * binary_tree_depth2 - Recursively measures the depth of a node in a binary tree.
 * @tree: Pointer to the node for which the depth is calculated.
 * Return: The depth of the given node.
 */
size_t binary_tree_depth2(const binary_tree_t *tree)
{
	int cont1 = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		cont1 += binary_tree_depth2(tree->parent);
	return (cont1 + 1);
}

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node for which the depth is calculated.
 * Return: The depth of the given node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_depth2(tree) - 1);
}
