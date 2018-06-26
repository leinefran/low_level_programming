#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: this is the integral value
 *
 * Return: value of r
 */
int print_last_digit(int r)
{
	int lastdig;

	lastdig = r % 10;

	if (lastdig < 0)
		lastdig = lastdig * -1;
	_putchar(lastdig + '0');
	return (lastdig);
}
