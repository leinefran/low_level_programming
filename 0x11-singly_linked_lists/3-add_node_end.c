#include "lists.h"
#include <string.h>

/**
 * add_node_end - a function that adds a new node at the end of a list_t
 * list.
 * @head: points to the address of the first node.
 * @str: points to the string.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	int i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}


	if (str != 0)
	{
		for (i = 0 ; str[i] != 0 ; i++)
			;
		new_node->len = i;
	}
	return (new_node);
}
