#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: function parameter
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		current = current->next;
		free(current);
	}

	*head = NULL;
}
