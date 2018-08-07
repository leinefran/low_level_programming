#include "lists.h"
#include <string.h>

/**
 * free_listint2 - a function that frees a list_t list.
 * @head: points to the pointer that points to the address of the first node.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	if (*head == NULL)
		return (0);

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
