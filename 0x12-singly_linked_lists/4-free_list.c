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
		temp = head->next;
		free(head->str);
		free(temp);
		head = temp;
	}
}
