#include "sort.h"
void qs_helper(int *array, size_t size, int low, int high);
int partition(int *array, size_t size, int low, int high);
/**
 * quicksort - a function that sorts an array of integers
 * in ascending order using the quicksort algorith & lomuto partition.
 * @array: the array to be sorted.
 * @size: the size of the array.
 * Return: Nothing.
 */
void quick_sort(int *array, size_t size)
{
	qs_helper(array, size, 0, size - 1);
}
/**
 * qs_helper - sorts elements low through high.
 * @array: the array to be sorted.
 * @size: size of array.
 * @low: lowest elements.
 * @high: highest elements.
 * Return: Nothing.
 */
void qs_helper(int *array, size_t size, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, size, low, high);
		qs_helper(array, size, low, pivot - 1);
		qs_helper(array, size, pivot + 1, high);
	}
}
/**
 * partition - a function that takes last element as pivot,
 * places the pivot element at its correct position in sorted array,
 * and places all smaller than pivot to left of pivot & all greater elements
 * to right of pivot.
 * @array: the array to be sorted.
 * @size: size of array.
 * @low: lowest elements.
 * @high: highest elements.
 */
int partition(int *array, size_t size, int low, int high)
{

	int pivot = array[high];
	int i = low, j, tmp;

	for (j = low ; j <= high - 1 ; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	tmp = array[i];
	array[i] = array[high];
	array[high] = tmp;
	print_array(array, size);
	return (i);
}
