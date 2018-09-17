#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 *
 * @h: points to the pointer that points to the address of the first node.
 * @n: the value inside the node.
 * @idx: the position where the new node should be added.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *new_node, *current;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	current = *h;

	if (idx == 0)
	{
		if (new_node->next != NULL)
			current->next->prev = new_node;
		return (add_dnodeint(h, n));
	}

	while (count < idx)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		count++;
	}
	new_node->next = current->next;
	new_node->prev = current;
	current->next = new_node;
/*	current->next->prev = new_node; */
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
