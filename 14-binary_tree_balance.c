#include "binary_trees.h"

size_t binary_tree_height_b(const binary_tree_t *tree);

/**
 * binary_tree_height_b - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Height of the binary tree, 0 if the tree is NULL.
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
	r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
	return ((l > r) ? l : r);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Balance factor of the binary tree, 0 if the tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int total = 0;

	if (tree)
		total = binary_tree_height_b(tree->left) - binary_tree_height_b(tree->right);

	return (total);
}
