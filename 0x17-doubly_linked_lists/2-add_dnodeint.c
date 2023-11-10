#include "lists.h"

/**
 * add_dnodeint - function that add new node at the beginning of a list
 * @head: head of the linked list
 * @n: number to be put at the beginning
 * Return: NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *r;

	r = malloc(sizeof(dlistint_t));

	if (r == NULL)
		return (NULL);

	r->n = n;
	r->prev = NULL;
	r->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = r;
	}
	(*head) = r;
	return (*head);
}
