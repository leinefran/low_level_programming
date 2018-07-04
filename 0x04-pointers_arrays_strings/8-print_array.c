#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * number must be separated by comma, followed by a space
 *
 * @a: points to the address of the 1st character of the string to be printed
 * @n: is the number of elements of the array to be printed
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int count;

	count = 0;

	while (count < n && count != (n - 1))
	{
		printf("%d, ", (a[count]));
		count++;
		if (count >= (n - 1))
			printf("%d\n", (a[count]));
	}
}
