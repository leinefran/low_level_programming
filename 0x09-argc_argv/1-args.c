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
	(void) argv;


	printf("%d\n", argc - 1);

	return (0);
}
