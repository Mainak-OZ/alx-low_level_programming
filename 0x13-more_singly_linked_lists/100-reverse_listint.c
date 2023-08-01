#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node
 * Return: pointer to the first node in the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *oldlist = NULL;
	listint_t *newlist = NULL;

	while (*head)
	{
		newlist = (*head)->newlist;
		(*head)->newlist = oldlist;
		oldlist = *head;
		*head = newlist;
	}

	*head = oldlist;

	return (*head);
}
