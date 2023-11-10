/**
 * print_dlistint - fuction that prints all the elements
 * of the doublu linked list
 * @h: the head of the linked list
 * Return: the number of nodes
 */
#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	printf("\n");
	return (count);
}
