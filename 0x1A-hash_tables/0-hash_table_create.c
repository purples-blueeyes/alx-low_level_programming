#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htt;
	unsigned long int i;

	htt = malloc(sizeof(hash_table_t));
	if (htt == NULL)
		return (NULL);

	htt->size = size;
	htt->array = malloc(sizeof(hash_node_t *) * size);
	if (htt->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		htt->array[i] = NULL;

	return (htt);
}
