#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - a function that prints the binary representation
 * of a number.
 * @n: points to the number being passed to the function.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int n_tmp;
	int length = 0, shift;

	n_tmp = n;

	if (n == 0)
		_putchar('0');

	while (n_tmp > 0)
	{
		length++;
		n_tmp = n_tmp >> 1;
	}
	for (length-- ; length >= 0 ; length--)
	{
		shift = n >> length;
		if (shift & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
