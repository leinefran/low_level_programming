#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: pointer to 1st char of string to be reverse.
 * @n: number of elements of the array.
 *
 * Return: int.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;

	while (a[i] != '\0')
		i++;

	for (i = 0; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
