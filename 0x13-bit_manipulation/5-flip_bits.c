#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number passed.
 * @m: second number passed.
 * Return: the number of bits necessary to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mn, mask = 1;
	unsigned int count = 0;

	mn = m ^ n; /* to access how many times flips */

	while (mask) /* while mask isn't == 0 */
	{
		if (mn & mask)
			count++;
		mask <<= 1;
	}

	return (count);
}
