#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n"); /*print "[0] (nil)" if the string is NULL*/
		else
		printf("[%u] %s\n", h->len, h->str); /*print string along with its length*/
		h = h->next;
		s++;
	}
	return (s); /*Return the number of elements in the lsit*/
}
