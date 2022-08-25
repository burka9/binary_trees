#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node to the parent's right
 *
 * @parent: the parent node
 * @value: value of the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = parent->right;
	new->parent = parent;

	parent->right = new;

	return (new);
}
