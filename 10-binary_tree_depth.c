#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of a node in a binary tree.
 * @tree: Pointer to the node for which depth is measured.
 *
 * Return: Depth of the node, 0 if the node or its parent is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
