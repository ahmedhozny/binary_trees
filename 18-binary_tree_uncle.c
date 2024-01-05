#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *g_parent;

	if (!node || !node->parent)
		return (NULL);

	node = node->parent;

	if (!node->parent)
		return (NULL);

	g_parent = node->parent;

	return (g_parent->left == node ? g_parent->right : g_parent->left);
}
