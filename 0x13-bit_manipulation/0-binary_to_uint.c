#include <stdio.h>
#include "holberton.h"
#include <math.h>

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int.
 * @b: points to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if b is null or
 * there is one or more chars in the string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dn = 0;
	int length = 0, x = 1;

	if (b == NULL)
		return (0);

	for (length = 0; b[length] != '\0' ; length++)
		;

	length--;
	while (length >= 0)
	{
		if (b[length] != '1' &&  b[length] != '0')
			return (0);
		if (b[length] == '1')
			dn += x;

		length--;
		x *= 2;
	}
	return (dn);
}
