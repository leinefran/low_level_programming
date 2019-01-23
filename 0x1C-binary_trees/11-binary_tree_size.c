#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: a pointer to the root node.
 * Return: if tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0, left_subtree = 0, right_subtree = 0;

	if (!tree)
		return (0);

	else
	{
		left_subtree = binary_tree_size(tree->left);
		right_subtree = binary_tree_size(tree->right);
		tree_size = left_subtree + right_subtree + 1;
	}
		return (tree_size);
}
