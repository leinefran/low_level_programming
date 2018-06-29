#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: is the size of the triangle
 * if size is <= 0, the function should print only \n.
 */
void print_triangle(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 1 ; row <= size ; row++)
		{
			for (column = size ; column > 0 ; column--)
			{
				if(row < column)
				_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
