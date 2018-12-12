#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree.
 * @tree: a pointer to the root node.
 * Return: a pointer to the new node. Otherwise, return NULL.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	/* delete subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* delete the root node */
	free(tree);
}
