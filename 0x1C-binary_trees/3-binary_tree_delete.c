#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right
 * child of another node;
 * @parent: a pointer to the parent node;
 * @value: the value to put in the new node;
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
