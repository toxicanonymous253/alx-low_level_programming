#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	while(head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
