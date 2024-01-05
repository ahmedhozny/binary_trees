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
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: 1 if the binary tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (!tree)
		return (0);

	height_left = binary_tree_height_b(tree->left);
	height_right = binary_tree_height_b(tree->right);

	return (binary_tree_is_full(tree) && height_left == height_right);
}
