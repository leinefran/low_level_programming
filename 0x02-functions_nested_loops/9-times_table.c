#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int row, column, x, y;

	for (row = 0 ; row <= 9 ; row++)
	{
		for (column = 0 ; column <= 9 ; column++)
		{
			x = (row * column) / 10;
			y = (row * column) % 10;

			if ((row * column) <= 9)
			{
				if (column != 0)
				{
					_putchar(' ');
				}
				_putchar(y + '0');
				if (column != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (x != 0)
			{
				_putchar(x + '0');
				_putchar(y + '0');
				if ((row * column) != 81)
				{
					if (column != 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
