#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a global function designated start of the program.
 *
 * @argc: contains the numbers of arguments passed to the program.
 * @argv: array of strings.
 *
 * Return: (0).
 */
int isdigit(int c);
int isalpha(int argument);

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc != 3)
		printf("0\n");

	for (i = 1 ; i <= 9 ; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

	for (i = 1; i < argc ; i++)
	{
		if(isalpha(argv[i])))
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
