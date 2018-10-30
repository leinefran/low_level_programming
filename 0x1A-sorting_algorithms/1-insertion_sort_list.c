#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a linked list
 * @list: the linked list to be sorted.
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t current = list;
	listint_t after = current->next;
	listint_t before = current->prev;
	listint_t last = current->next->next;

	/* check for 0 or 1 element in list */
	if(list == NULL || *list == NULL || list->next == NULL)
		return;

	while(current && after)
	{
		if (current->n > after->n) /*swap!*/
		{
			before->next = after;
			if (last != NULL)
				last->prev = current;
			current->next = last;
			after->prev = before;
			after->next = current;
			current->prev = after;
			print_list(*current);
			break;
		}
		current = current->next;
	}
}
