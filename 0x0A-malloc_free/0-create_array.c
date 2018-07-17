#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars;
 * and initializes it with a specific char.
 *
 * @size: size of the array.
 * @c: ;
 *
 * Return: char.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}

	array = malloc(sizeof(char) * size);

	for (i = 0; i < size ; i++)
		array[i] = c;
	return (array);
}
