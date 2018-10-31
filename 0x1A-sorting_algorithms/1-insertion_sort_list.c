#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a linked list
 * @list: the linked list to be sorted.
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *move, *hold;

	/* check for 0 or 1 element in list */
	if(list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	move = hold = (*list)->next;
	while(hold)
	{
		hold = hold->next;
		while(move->prev && move->n < move->prev->n) /*swap!*/
		{
			if (move->next)
				move->next->prev = move->prev;
			move->prev->next = move->next;
			move->next = move->prev;
			move->prev = move->prev->prev;
			move->next->prev = move;
			if (move->prev)
				move->prev->next = move;
			else
				*list = move;
			print_list(*list);
		}
		move = hold;
	}
}
