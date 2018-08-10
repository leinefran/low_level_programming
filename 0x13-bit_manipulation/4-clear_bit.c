#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - a function that sets the value of a bit to 0
 * a given index.
 * @n: points to the number being passed to the function.
 * @index: the index starting at 0.
 * Return: the value of the bit at index index;
 * or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
