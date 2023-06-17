#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: function parameter
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	while (current != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
