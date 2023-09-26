#include "lists.h"

/**
 * listint_len - This returns the number of elements in a listint_t list.
 * @h: This is the pointer to the head of the list.
 *
 * Return: This is the number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h)
	{
	element++;
	h = h->next;
	}

	return element;
}
