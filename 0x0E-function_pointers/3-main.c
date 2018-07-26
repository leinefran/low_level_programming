#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - a program that performs simple operations.
 * @argc: number of arguments.
 * @argv: array of elements.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] ==  '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
