#include "lists.h"

/**
 * free_dlistint - function that frees the list
 * @head: the head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
