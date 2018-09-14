#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: points to the pointer that points to the address of the first node.
 * @n: the data.
 * Return: the number of nodes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Put in the data */
	new_node->n = n;

	/* Make next of new node as head and previous as NULL */
	new_node->next = (*head);
	new_node->prev = NULL;

	/* Change prev of head node to new_node */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Head points to new_node */
	*head = new_node;

	return (new_node);
}
