#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_create;
	unsigned long int i;

	hash_table_create = malloc(sizeof(hash_table_create));

	if (hash_table_create == NULL)
		return (NULL);

	hash_table_create->size = size;
	hash_table_create->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_create->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_table_create->array[i] = NULL;
	}

	return (hash_table_create);
}
