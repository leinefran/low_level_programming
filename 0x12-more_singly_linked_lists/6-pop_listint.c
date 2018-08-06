#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list;
 * returns the head node’s data (n).
 * @head: points to the pointer that points to the address of the first node.
 *
 * Return: 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = (*head)->next;
	data = tmp->n;
	free(*head);
	*head = tmp;

	return (data);
}
