#include "lists.h"

/**
 * print_dlistint_backward - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		print_dlistint_backward(h->next);
		printf("%d\n", h->n);
		h = h->next;
		nodes += 1;
	}

	return (nodes);
}
