#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns nth
 * node of a linked list
 * @head: The head of the linked list
 * @index: the position of the needed index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/*traverse the linked list*/
	dlistint_t *temp;
	unsigned int i;
	/*Checking if the head of the linked list is nil*/
	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
