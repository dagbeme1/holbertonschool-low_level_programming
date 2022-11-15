#include "lists.h"

/**
 * dlistint_len - counts and returns num elements in doubly linked list
 * @h: pointer to head of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
