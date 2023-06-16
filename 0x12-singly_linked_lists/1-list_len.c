#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: function parameter
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
