#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */


listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t)); /* create new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* set values */

	new_node->next = *head; /* first link new node to point to first node */
	*head = new_node; /* then switch list pointer to point to new node */

	return (new_node);
}
