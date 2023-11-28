#include "lists.h"
#include <stdlib.h>
/**
 * create_dnodeint - Creates a new doubly linked list node.
 * @n: Integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
static dlistint_t *create_dnodeint(int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
return (new_node);
}
/**
 * insert_at_beginning - Inserts a new node at the beginning of the list.
 * @h: Pointer to the head of the doubly linked list.
 * @new_node: Pointer to the new node to be inserted.
 */
static void insert_at_beginning(dlistint_t **h, dlistint_t *new_node)
{
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
}
/**
 * insert_in_middle - Inserts a new node in the middle of the list.
 * @current: Pointer to the node at position idx - 1.
 * @new_node: Pointer to the new node to be inserted.
 */
static void insert_in_middle(dlistint_t *current, dlistint_t *new_node)
{
new_node->prev = current;
new_node->next = current->next;
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;
}
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
new_node = create_dnodeint(n);
if (new_node == NULL)
return (NULL);
if (idx == 0)
{
insert_at_beginning(h, new_node);
}
else
{
current = *h;
for (i = 0; i < idx - 1 && current != NULL; i++)
current = current->next;
if (current == NULL)
{
free(new_node);
return (NULL);
}
insert_in_middle(current, new_node);
}
return (new_node);
}
