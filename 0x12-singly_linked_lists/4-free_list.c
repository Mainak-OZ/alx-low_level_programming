#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list_t list to free
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head)
	{
		head = temp;
		temp = head->next;
		free(head->str);
		free(head);
	}
}
