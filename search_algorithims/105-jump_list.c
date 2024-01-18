#include "search_algos.h"

/**
 * jump_list - search for a value - Jump search algorithm
 * @list:  Pointer to the first element of the array.
 * @size:  Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Pointer to the node of the list where value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx = 0, jump = sqrt(size);
	listint_t *head = list, *temp = NULL;

	if (!list)
		return (NULL);
	while (head->next)
	{
		temp = head;
		while (temp->next && temp->index < jump)
			temp = temp->next;
		printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
		if (!temp->next || jump >= size || temp->n >= value)
			break;
		idx = jump;
		jump = jump + sqrt(size);
		head = temp;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", idx, temp->index);
	while (head && head->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", head->index, head->n);
		if (head->n == value)
			return (head);
		head = head->next;
	}
	return (NULL);
}
