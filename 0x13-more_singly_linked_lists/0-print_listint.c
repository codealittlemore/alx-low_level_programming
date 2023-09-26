#include <stdio.h>
#include "lists.h"

/**
 * print_listint - This prints all elements of a listint_t list.
 * @h: This is the pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	nodes++;
	}

	return (nodes);
}
