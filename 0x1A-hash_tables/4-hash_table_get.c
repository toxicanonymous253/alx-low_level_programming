#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table to be looked into
 * @key: the key that the paired value is needed
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/*Computing the index so as to =locate the index*/
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *curr_item = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	if (index >= ht->size)
		return (NULL);

	if (curr_item && strcmp(curr_item->key, key) == 0)
	{
		if (curr_item->value == NULL)
			return (NULL);
		else
			return (curr_item->value);
	}
	return (NULL);
}
