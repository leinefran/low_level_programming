#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm.
 * @array: the array to be sorted.
 * @size: the size of the array.
 * Return: Nothing.
 */
void swap(int *a, int *b);
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t iMin = j;

	for (j = 0; j < size - 1; j++)
	{
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[iMin])
			{
				iMin = i;
			}
		}
	}
	if (iMin != j)
	{
		swap(&array[j], &array[iMin]);
	}
}
/**
 * swap_int - swaps the values of two integers.
 * @a: is the pointer to be swaped with b
 * @b: is the pointer to be swaped with a
 *
 * Return: Always 0.
 */
void swap(int *a, int *b)
{
        int x;

        x = *a;

        *a = *b;
        *b = x;
}
