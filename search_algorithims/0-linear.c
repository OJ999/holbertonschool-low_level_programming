#include "search_algos.h"

/**
 * linear_search - searches for a value - Linear search algorithm used.
 * @array: Pointer to the first element of the array.
 * @size:  Number of elements in the array.
 * @value: Value to search.
 *
 * Return: The first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
