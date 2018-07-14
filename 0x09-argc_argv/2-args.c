#include "holberton.h"
#include <stdio.h>

/**
 * main - a global function designated start of the program.
 *
 * @argc: contains the numbers of arguments passed to the program.
 * @argv: array of strings.
 *
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
