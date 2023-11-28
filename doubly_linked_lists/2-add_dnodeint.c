#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Set values for the new node */
new_node->n = n;
new_node->prev = NULL;

/* Update pointers to link the new node to the list */
if (*head != NULL)
(*head)->prev = new_node;
new_node->next = *head;

/* Update the head to point to the new node */
*head = new_node;

return (new_node);
}
