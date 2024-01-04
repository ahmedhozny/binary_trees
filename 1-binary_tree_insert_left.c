#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts new node as left child of a given node.
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new left child node.
 *
 * Return: Pointer to the newly created left child node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	if (parent->left != NULL)
		new->left = parent->left, parent->left->parent = new;

	parent->left = new;

	return (new);
}
