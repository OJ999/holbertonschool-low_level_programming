#include "search_algos.h"

/**
 * jump_search - search for a value - Jump search algorithm
 * @array: Pointer to the first element of the array.
 * @size:  Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0, jump = sqrt(size);

	if (!array)
		return (-1);
	while (idx < size)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (jump >= size || array[jump] >= value)
			break;
		idx = jump;
		jump = jump + sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", idx, jump);
	while (idx < size)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}
	return (-1);
}
