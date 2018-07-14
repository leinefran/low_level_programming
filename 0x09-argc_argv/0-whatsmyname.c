#include "holberton.h"
#include <stdio.h>

/**
 * ./mynameis - a program that prints its name, followed by a new line.
 *
 * @argc: contains the numbers of arguments passed to the program.
 * @argv: array of strings.
 *
 * Return: nothing.
 */
int main (int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
