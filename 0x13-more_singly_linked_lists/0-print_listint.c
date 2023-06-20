#include "lists.h"

/**
 * print_listint - function that prints elements of a list
 * @h: function pointer
 * Return: the number of node.
 */

size_t print_listint(const listint_t *h)
{
	int numberOfnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numberOfnodes++;
	}
	return (numberOfnodes);
}
