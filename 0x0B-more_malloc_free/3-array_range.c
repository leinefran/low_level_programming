#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: min value;
 * @max: max value;
 * Return: pointer to allocated memory.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, range;

	range = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * range);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < range ; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
