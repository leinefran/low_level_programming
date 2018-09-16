#include "lists.h"

/**
 * free_dlistint_t - a function that frees a dlistint_t list.
 * @head: points to the address of the first node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
