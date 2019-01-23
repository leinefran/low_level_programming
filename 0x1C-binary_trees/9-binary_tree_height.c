#include "binary_trees.h"

/**
 * binary_tree_height - a funct that measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to be measured.
 * Return: the height of the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	/* compute the height of each subtree */
	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);

/* return the largest one */

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
