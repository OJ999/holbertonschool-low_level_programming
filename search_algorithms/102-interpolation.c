#include "search_algos.h"

/**
 * interpolation_search - searches for a value - Interpolation search algorithm
 * @array: Pointer to the firs element of the array.
 * @size:  Number of elements in the array.
 * @value: Value to search.
 *
 * Return: The index where the value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;

	if (array)
	{
		while (low <= high)
		{
			pos = low +
				(((double)(high - low) / (array[high] - array[low])) *
				 (value - array[low]));
			if (pos < low || pos > high)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
			else
				return (pos);
		}
	}
	return (-1);
}
