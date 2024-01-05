#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves in a binary tree.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Number of leaves in the binary tree, 0 if the tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);


	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
