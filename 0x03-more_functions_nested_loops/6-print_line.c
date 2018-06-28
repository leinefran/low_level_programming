#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * followed by a new line.
 *
 * @n: is the number of times the character _ should be printed
 */
void print_line(int n)
{
	int line;

	for (line = 1 ; line <= n ; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
