#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: an array.
 * @size: the size of the array.
 * @action: a pointer to a function.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size ; i++)
	{
		if (array && action)
			action(array[i]);
	}
}
