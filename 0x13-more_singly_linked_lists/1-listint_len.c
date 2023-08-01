#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t list.
 * @h: linked list of type listint_t
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n1 = 0;

	while (h)
	{
		n1++;
		h = h->next;
	}
	return (n1);
}
