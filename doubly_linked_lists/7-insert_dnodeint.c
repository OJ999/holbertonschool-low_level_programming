#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *new_node, *current;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Set values for the new node */
new_node->n = n;

/* If idx is 0, insert at the beginning of the list */
if (idx == 0)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}

/* Find the node at position idx - 1 */
current = *h;
for (i = 0; i < idx - 1 && current != NULL; i++)
current = current->next;

/* Check if it's possible to insert at the given index */
if (current == NULL)
{
free(new_node);
return (NULL);
}

/* Update pointers to link the new node to the list */
new_node->prev = current;
new_node->next = current->next;
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;

return (new_node);
}
