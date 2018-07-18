#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0.
 * which contains the contents.
 *
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: char.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **p1, *p2;

	if (width < 1 || height < 1)
		return (NULL);

	p1 = malloc(sizeof(int *) * height);

	for (i = 0 ; i < height ; i++)
	{
		p2 = malloc(sizeof(int) * width);
		p1[i] = p2;
		for (j = 0 ; j < width ; j++)
		{
			p1[i][j] = 0;
		}

	}
	return (p1);
}
