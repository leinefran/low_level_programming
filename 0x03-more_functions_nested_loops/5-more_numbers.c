#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	char ch, first_digit, last_digit;
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		for (ch = 0 ; ch <= 14 ; ch++)
		{
			first_digit = ch / 10;
			last_digit = ch % 10;
			if (ch >= 10)
				_putchar(first_digit + '0');

			_putchar(last_digit + '0');
		}
		_putchar('\n');
	}
}
