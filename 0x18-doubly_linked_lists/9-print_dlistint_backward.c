#include "lists.h"

/**
 * print_dlistint_backward - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
size_t nodes;
if (h == NULL)
return (0);

while (h->next)
h = h->next;
for (nodes = 0; h; nodes++, h = h->prev)
printf("%i\n", h->n);
return (nodes);
}
