#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: a pointer to the root node.
 * Return: if tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaves = 0, size = 0, height = 0;
	int n = 1, s = 0, i = 0;

	if (!tree)
		return (0);

	leaves = binary_tree_leaves(tree);
	size = binary_tree_size(tree);
	height = binary_tree_height(tree);

	while (i < height)
	{
		n = n * 2;
		i++;
	}

	s = 2 * (leaves) - 1;

	if (leaves == n && size == s)
		return (1);

	return (0);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: a pointer to the root node.
 * Return: if tree is NULL return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_total = 0, leaves_left = 0, leaves_right = 0;

	if (!tree)
		return (0);

	else if (!tree->left && !tree->right)
		return (1);

	else
	{
		leaves_left = binary_tree_leaves(tree->left);
		leaves_right = binary_tree_leaves(tree->right);
		leaves_total = leaves_left + leaves_right;
	}
	return (leaves_total);
}

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
