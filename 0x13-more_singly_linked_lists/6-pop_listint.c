#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked listint_t list
 * @head: pointer to the first element in the linked list
 *
 * Return: data inside the deleted elements
 * Return 0 if the  empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num1;

	if (!head || !*head)
		return (0);
	{
		num1 = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (num1);
}
