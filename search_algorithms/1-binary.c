#include "search_algos.h"

/**
 * binary_search - searches for a value - Binary search algorithm.
 * @array: Pointer to the firs element of the array.
 * @size:  Number of elements in the array.
 * @value: Value to search.
 *
 * Return: The index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, m = 0, start = 0, end = size - 1;

	if (array)
	{
		while (start <= end)
		{
			printf("Searching in array: ");
			for (i = start; i <= end; i++)
			{
				printf("%d", array[i]);
				if (i + 1 <= end)
					printf(", ");
			}
			printf("\n");
			m = ((start + end) / 2);
			if (value < array[m])
				end = m - 1;
			else if (value > array[m])
				start = m + 1;
			else
				return (m);
		}
	}
	return (-1);
}
