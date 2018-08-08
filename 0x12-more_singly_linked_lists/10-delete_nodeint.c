#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index,
 * of a listint_t linked list.
 *
 * @head: points to the pointer that points to the address of the first node.
 * @index: the position where the new node should be added.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *current, *tmp_next, *tmp_afternext;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
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
	return (1);
}
