#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm.
 * @array: the array to be sorted.
 * @size: the size of the array.
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp = 0;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		/* Last i elements are already in place */
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}

}
