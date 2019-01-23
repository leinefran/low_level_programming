#include "binary_trees.h"

/**
 * binary_tree_uncle - checks if a binary tree is perfect.
 * @node: a pointer to the node to find the uncle.
 * Return: if node is NULL or have no uncle, return NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
