#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a \n
 * @n: number passed to the function
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = 0 ; n <= 98 ; n++)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
