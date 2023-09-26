#include "lists.h"

/**
 * free_listint - function
 * @head: int ti be free
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
