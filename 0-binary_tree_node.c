#include "binary_trees.h"

/**
 * binary_tree_node - creates new binary tree node
 *
 * @parent: the parent
 * @value: the value
 *
 * Return: binary_tree_node pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	if (parent != NULL)
	{
		if (parent->left == NULL)
			parent->left = new_node;
		else if (parent->right == NULL)
			parent->right = new_node;
		else
		{
			if (parent->left->left == NULL)
				binary_tree_node(parent->left, value);
			else if (parent->left->right == NULL)
				binary_tree_node(parent->left, value);
			else if (parent->right->left == NULL)
				binary_tree_node(parent->right, value);
			else if (parent->right->right == NULL)
				binary_tree_node(parent->right, value);
		}
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
