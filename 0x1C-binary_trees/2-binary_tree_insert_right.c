#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right
 * child of another node;
 * @parent: a pointer to the parent node;
 * @value: the value to put in the new node;
 * Return: a pointer to the new node. Otherwise, return NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	else
	{
		parent->right = new_node;
		new_node->right = NULL;
		new_node->left = NULL;
	}

	return (new_node);
}
