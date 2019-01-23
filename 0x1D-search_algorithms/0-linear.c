#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm;
 * @array: a pointer to the 1st element;
 * @size: the number of elements in the array;
 * @value: the value to search for
 * Return: the first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{

	int index = 0;

	if (!array)
		return (-1);

	for (index = 0; (unsigned int)index < size; index++)
	{
		if (array[index] == value)
		{
			printf("Value checked array[%d] = [%d]\n", index,
			       array[index]);
			return (index);
		}
		printf("Value checked array[%d] = [%d]\n", index,
			       array[index]);
	}
	return (-1);
}
