#include "lists.h"

/**
 * free_listint - function that frees the list
 * @head: function parameter
 * Return void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;

	while (current != NULL)
	{
		head = head->next;
		free(current);
	}
}
