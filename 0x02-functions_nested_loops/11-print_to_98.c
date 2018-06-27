#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a \n
 * @n: number passed to the function
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n ; x < 98 ; x++)
			printf("%i, ", x);
	}
	else if (n > 98)
	{
		for (x = n ; x > 98 ; x--)
		printf("%i, ", x);
	}
printf("98\n");
}
