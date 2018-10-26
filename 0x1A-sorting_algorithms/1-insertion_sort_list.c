#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a linked list
 * @list: the linked list to be sorted.
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	/* check for 0 or 1 element in list */
	if(list == NULL || *list == NULL || list->next == NULL)
		return;

	/* head is the 1st element of resulting sorted list */
	struct listint_t *head = NULL;

	while(list != NULL)
	{
		struct listint_t *current = list;
		list = list->next;
		if (head == NULL)
		{
			current->next = head;
			head = current;
		}
		else
		{
			struct listint_t *p = head;
			while (p != NULL)
			{
				if (p->next == NULL)
				{
					current->next = p->next;
					p->next = current;
					break;
				}
				p = p->next;
			}
		}
	}
}
