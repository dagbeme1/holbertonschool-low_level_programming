#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Print all elements of a list_t list
 * @h: Pointer to the first element of the list
 *
 * Return: Number of elements in the list
 */

size_t list_len(const list_t *h)
{
size_t linkedNodes;

if (h == NULL)
return (0);
linkedNodes = 0;
linkedNodes++;
printf("[%d] %s\n", h->len, h->str);
if (h->next != NULL)
linkedNodes += print_list(h->next);
return (linkedNodes);
}
