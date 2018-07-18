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
	int i, j, **p1;

	if (width < 1 || height < 1)
		return (NULL);

	p1 = (int **)malloc(sizeof(int *) * height);

	if (p1 == NULL)
	{
		free(p1);
		return (NULL);
	}

	for (i = 0 ; i < height ; i++)
	{
		p1[i] = (int *)malloc(sizeof(int) * width);
		if (p1[i] == NULL)
		{
			for (i = i ; i >= 0 ; i--)
			{
				free(p1[i]);
			}
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
		{
			p1[i][j] = 0;
		}

	}
	return (p1);
}
