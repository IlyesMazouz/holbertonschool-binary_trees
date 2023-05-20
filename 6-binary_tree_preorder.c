#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs pre-order traversal on a binary tree
 * @tree: root of the node
 * @func: the function to be called for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
