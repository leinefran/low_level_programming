#include "lists.h"
#include <string.h>

/**
 * free_listint - a function that frees a list_t list.
 * @head: points to the address of the first node.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		head = head->next;
		free(head);
	}
}
