#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: function parameter
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	current = *head;

	while (current != NULL)
	{
		current = current->next;
		free(current);
	}
}
