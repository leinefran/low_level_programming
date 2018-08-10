#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - a function that returns the value of a bit at
 * a given index.
 * @n: points to the number being passed to the function.
 * @index: the index starting at 0.
 * Return: the value of the bit at index index;
 * or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int shift;

	if (index > 64)
		return (-1);

	while (index == 0 || index > 0)
	{
		shift = n >> index;
		if (shift & 1)
			return (1);
		else
			return (0);
	}
	return (-1);
}
