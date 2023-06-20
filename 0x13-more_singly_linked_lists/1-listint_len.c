#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: function parameter
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int numberOfnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numberOfnodes++;
	}
	return (numberOfnodes);
}
