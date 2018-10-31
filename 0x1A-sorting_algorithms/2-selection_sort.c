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
				tmp = array[j];
				array[j] = array[min_idx];
				array[min_idx] = tmp;
			}
			print_array(array, size);
		}
		if (min_idx != i)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}
