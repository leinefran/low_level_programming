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
	size_t i, j, min_idx, tmp;

	min_idx = i;
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
			tmp = min_idx;
			print_array(array, size);
		}
		if (min_idx != i)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}
/**
 * swap - swaps the values of two integers.
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
