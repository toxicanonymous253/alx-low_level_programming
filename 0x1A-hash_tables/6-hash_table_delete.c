#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes the hash table
 * @ht: the table to be deleted
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	/*step 1 delete the items*/
	/*step 2 delete the table*/

	hash_node_t *item, *temp;
	hash_table_t *head = ht;
	unsigned int i = 0;


	if (ht == NULL)
		return;

	for (; i < ht->size; i++)
	{
		item = ht->array[i];

		while (item != NULL)
		{
			temp = item->next;
			free(item->key);
			free(item->value);
			free(item);
			item = temp;
		}
	}
	free(head->array);
	free(head);
}
