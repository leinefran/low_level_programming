#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm.
 * @array: the array to be sorted.
 * @size: the size of the array.
 * Return: Nothing.
 */
void swap(int *a, int *b);
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		/* Last i elements are already in place */
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
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
