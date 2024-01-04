#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the binary tree.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (!tree)
		return;

	left = tree->left;
	right = tree->right;

	free(tree);
	binary_tree_delete(left);
	binary_tree_delete(right);
}
