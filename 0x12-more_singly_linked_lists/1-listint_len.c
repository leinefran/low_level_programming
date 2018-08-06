#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list_t
 * @h: points to the address of the first node.
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
