#include "binary_trees.h"

/**
 * binary_tree_node - Create a new binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: The integer value to be stored in the new node
 *
 * Return: A pointer to the newly created binary tree node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
		binary_tree_t *newNode;
		newNode = malloc(sizeof(binary_tree_t));

		if (newNode == NULL)
		{
				return (NULL);
		}

		newNode->n = value;
		newNode->parent = parent;
		newNode->left = NULL;
		newNode->right = NULL;

		return (newNode);
}
