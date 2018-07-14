#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a global function designated start of the program.
 *
 * @argc: contains the numbers of arguments passed to the program.
 * @argv: array of strings.
 *
 * Return: (num1 * num2).
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc ; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);
	return (0);
}
