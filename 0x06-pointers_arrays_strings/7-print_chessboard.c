#include "holberton.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * _putchar -  prints a char at a time.
 *
 * @a: pointer to first dimension of multi-dimensional array.
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			_putchar(i);
			_putchar(j);
		}
	}
}
