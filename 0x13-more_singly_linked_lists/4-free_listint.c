#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *freed;

	while (head)
	{
		freed = head->next;
		free(head);
		head = freed;
	}
}
