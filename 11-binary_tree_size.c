#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: if tree is NULL, return 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_size, left_size;

	if (tree == NULL)
		return (0);
	right_size = binary_tree_size(tree->right);
	left_size = binary_tree_size(tree->left);
	return (right_size + left_size + 1);
}
