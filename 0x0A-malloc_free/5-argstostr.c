#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac : arguments.
 * @av: arrays.
 * Return: void.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *concat;

	k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0' ; j++)
			length++;
	}

	concat = (char *)malloc(sizeof(char) * length + ac + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			concat[k++] = av[i][j];
		}
		concat[k++] = '\n';
	}
	concat[k] = '\0';
	return (concat);
}
