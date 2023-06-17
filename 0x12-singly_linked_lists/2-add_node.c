#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: function parameter
 * @str: function parameter
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	new_node = *head;

	*head = new_node;

	return (new_node);
}
