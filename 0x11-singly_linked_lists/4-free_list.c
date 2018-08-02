#include "lists.h"
#include <string.h>

/**
 * free_list - a function that frees a list_t list.
 * @head: points to the address of the first node.
 * Return: the address of the new element, or NULL if it failed.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
