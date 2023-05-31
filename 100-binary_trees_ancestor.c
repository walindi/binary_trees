#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node, else NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *j, *k;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	j = first->parent;
	k = second->parent;

	if (j == NULL || first == k || (!j->parent && k))
		return (binary_trees_ancestor(first, k));

	else if (k == NULL || j == second || (!k->parent && j))
		return (binary_trees_ancestor(j, second));

	return (binary_trees_ancestor(j, k));
}
