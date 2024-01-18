#include "search_algos.h"

/**
 * auxbin - auxilar function.
 * @array: Pointer to the firs element of the array.
 * @low:   Position of the first element of the sub-array.
 * @high:  Position of the last element of the sub-array.
 * @value: Value to find in the array.
 *
 * Return: Index where value is located.
 */
int auxbin(int *array, size_t low, size_t high, int value)
{
	size_t i = 0, m = 0;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i + 1 <= high)
				printf(", ");
		}
		printf("\n");
		m = low + (high - low) / 2;
		if (array[m] == value && array[m - 1] != value)
			return (m);
		if (value <= array[m])
			return (auxbin(array, low, m, value));
		else if (value > array[m])
			return (auxbin(array, (m + 1), high, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value
 * Binary search algorithm with recursion.
 * @array: Pointer to the firs element of the array.
 * @size:  Number of elements in the array.
 * @value: Value to search.
 *
 * Return: The index where the value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (auxbin(array, 0, (size - 1), value));
}
