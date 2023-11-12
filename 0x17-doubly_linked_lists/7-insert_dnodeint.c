#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: the head of the linked list
 * @idx: the position of the
 * @n: the number to be inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *r;
	unsigned int i, count = 0;
	/*Checking if the linked list is NULL*/
	if (*h == NULL)
	{
		return (NULL);
	}
	temp = *h;
	while(temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (idx > count)
	{
		return (NULL);
	}
	/*if the node to be add is at the first index*/
	if (idx == 0)
	{
		r = malloc(sizeof(dlistint_t));
		if (r == NULL)
		{
			return (NULL);
		}
		r->prev = NULL;
		r->n = n;
		r->next = *h;
		(*h)->prev = r;
		*h = r;
		return (*h);
	}
	/*If the node is in the middle*/
	temp = *h;
	if (idx > 0)
	{
		for (i = 1; i < idx; i++)
		{
			temp = temp->next;
		}
		r = malloc(sizeof(dlistint_t));
		r->prev = temp;
		r->n = n;
		r->next = temp->next;
		temp->next = r;
		return (*h);
	}

	return (NULL);
}
