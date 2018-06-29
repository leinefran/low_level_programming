#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: is the number of times the character _ should be printed
 * if n is <= 0, the function should print only \n.
 * row will take care of the backslashes
 * column will take care of the spaces and new lines
 */
void print_diagonal(int n)
{
	int row;
	int column;

	if (n > 0)
	{
		for (row = 1 ; row <= n ; row++)
		{
			for (column = 1 ; column < row ; column++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
