#include "search_algos.h"

/**
 * exponential_search - searches for a value - Exponential search algorithm
 * @array: Pointer to the firs element of the array.
 * @size:  Number of elements in the array.
 * @value: Value to search.
 *
 * Return: The index where the value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low = 1, high = size - 1, i = 0, m = 0;

	if (!array)
		return (-1);
	while (low < high && array[low] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		low *= 2;
	}

	if (low < size)
		high = low;
	else
		high = size - 1;

	low /= 2;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i + 1 <= high)
				printf(", ");
		}
		printf("\n");
		m = (low + high) / 2;
		if (value < array[m])
			high = m - 1;
		else if (value > array[m])
			low = m + 1;
		else
			return (m);
	}
	return (-1);
}
