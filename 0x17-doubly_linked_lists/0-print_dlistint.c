/**
 * print_dlistint - fuction that prints all the elements
 * of the doublu linked list
 * @h: the head of the linked list
 * Return: the number of nodes
 */
#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
