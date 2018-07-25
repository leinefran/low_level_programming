#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a func that searches for an interger.
 *
 * @array: an array.
 * @size: the size of the array.
 * @cmp: a pointer to the func to be used to compare values.
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
