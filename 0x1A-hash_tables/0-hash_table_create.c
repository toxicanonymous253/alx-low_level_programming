#include "hash_tables.h"

/**
 * hash_table_create -function willl create the hash table
 * @size: size of the hash table to be created
 * Return: table created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;

	if (!size)
	{
		return (NULL);
	}

	table = (hash_table_t *) malloc(sizeof(hash_table_t));

	/*Checking if memory has been allocated*/
	if (table == NULL)
	{
		return (NULL);
	}


	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
