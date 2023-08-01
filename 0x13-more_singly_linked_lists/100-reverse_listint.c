#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node
 * Return: pointer to the first node in the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->new;
		(*head)->new = old;
		old = *head;
		*head = new;
	}

	*head = old;

	return (*head);
}
