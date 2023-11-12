#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data
 * @head: the head of the linked lit
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}