#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node
 * at the end of a dlistint_t list.
 * @head: points to the pointer that points to the address of the first node.
 * @n: the data.
 * Return: the number of nodes.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	/* Put in the data */
	new_node->n = n;

	/* The new_node is going to be the last node */
	/* Make next of new node as NULL */
	new_node->next = NULL;

	/* If the List is empty, then make the new-node as head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
	}
	return (new_node);
}
