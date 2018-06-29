#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: is the size of the square
 * if n is <= 0, the function should print only \n.
 */
void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 1 ; row <= size ; row++)
		{
			for (column = 1 ; column < size ; column++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
