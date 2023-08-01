#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addnode;
	listint_t *temp = *head;

	addnode = malloc(sizeof(listint_t));
	if (!addnode)
		return (NULL);
	addnode->n = n;
	addnode->next = NULL;

	if (*head == NULL)
	{
		*head = addnode;
		return (addnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = addnode;

	return (addnode);
}
