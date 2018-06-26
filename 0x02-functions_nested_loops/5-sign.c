#include "holberton.h"

/**
 * print_sign - a function that checks for alphabetic characters
 * @n: the number to be checked
 *
 * Return: 1 if n is > 0, -1 if n is < 0. 0 otherwise
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
