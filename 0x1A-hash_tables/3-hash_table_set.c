#include "hash_tables.h"

/**
 * hash_table_set - function that adds and element to the hash table
 * @ht: hash table that you want to add or update the key/value to
 * @key: this is the key and cannot be empty string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
/*In case of collision, add the new node at the beginning of the list*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	/*Allocating memory for the item*/
	hash_node_t *item = (hash_node_t *) malloc(sizeof(hash_node_t));
	/*used to check if there is data in the array of the hash table*/
	hash_node_t *curr_item = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	item->key = strdup(key); /*make a copy of key*/

	if (item->key == NULL)
	{
		return (0);
	}
	item->value = strdup(value); /*make a copy of value*/
	item->next = NULL;

	if (index >= ht->size)
	{
		free(item->key);
		free(item->value);
		free(item);
		return (0);
	}

	if (curr_item == NULL)
	{
		ht->array[index] = item;
		return (1);
	}
	/*There is a value in the array*/
	else
	{
		item->next = curr_item;
		ht->array[index] = item;
		return (1);
	}
}
