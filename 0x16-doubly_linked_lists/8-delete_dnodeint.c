#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index,
 * of a dlistint_t linked list.
 * @head: points to the pointer that points to the address of the first node.
 * @index: the position where the new node should be added.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 1;
	dlistint_t *current, *tmp_next, *tmp_afternext;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (count < index)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
		count++;
	}
	tmp_next = current->next;
	tmp_afternext = tmp_next->next;
	free(tmp_next);
	current->next = tmp_afternext;
	tmp_afternext->prev = current;
	if (tmp_next != NULL)
		tmp_next->next->prev = tmp_next->prev;
	if (tmp_next->prev != NULL)
		tmp_next->prev->next = tmp_next->next;
	return (1);
}
