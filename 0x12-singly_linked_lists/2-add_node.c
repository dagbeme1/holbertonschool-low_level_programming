#include "lists.h"
#include <string.h>

/**
 * add_node - Add an element to a list at the front of the list
 * @head: Pointer to the pointer to the start of the list
 * @str: Pointer to the string to be put into the element of the list
 *
 * Return: Address of new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
