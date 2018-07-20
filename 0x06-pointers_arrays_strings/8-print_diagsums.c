#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * _putchar -  prints a char at a time.
 *
 * @a: pointer to first dimension of multi-dimensional array.
 * @size: size of array.
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int d_s1, d_s2, i;

	d_s1 = 0;
	d_s2 = 0;

	for (i = 0; i < size ; i++)
	{
		d_s1 += a[i * (size + 1)];
		d_s2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", d_s1, d_s2);
}
