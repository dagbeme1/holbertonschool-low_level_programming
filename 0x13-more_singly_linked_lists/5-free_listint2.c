#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL) /* account for no ptr */
		return;

	while (*head != NULL) /* have ptr keep track of head node and free */
	{
		ptr = *head;
		*head = ptr->next; /* move to next node while ptr frees prior */
		free(ptr);
	}

}
