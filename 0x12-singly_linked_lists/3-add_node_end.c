#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: function parameter
 * @str: function parameter
 * Return: the addres of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;
	unsigned int len = 0;

	while (str[len])
	{
		/* code */
		len++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;

		return (new_node);
	}

	while (current != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
