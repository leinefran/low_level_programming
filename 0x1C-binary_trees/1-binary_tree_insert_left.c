#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node;
 * @parent: a pointer to the parent node;
 * @value: the value to put in the new node;
 * Return: a pointer to the new node. Otherwise, return NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	else
	{
		parent->left = new_node;
		new_node->left = NULL;
		new_node->right = NULL;
	}

	return (new_node);
}
