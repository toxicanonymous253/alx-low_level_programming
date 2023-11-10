#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: the head of the linked list
 * @n: the number to be inserted in a linked list
 * Return: NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *r;

	if (*head == NULL)
	{
		r = malloc(sizeof(dlistint_t));
		r->prev = NULL;
		r->n = n;
		r->next = NULL;
		*head = r;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		r = malloc(sizeof(dlistint_t));
		r->n = n;
		r->next = NULL;
		temp->next = r;
		r->prev = temp;
	}
	return (*head);
}
