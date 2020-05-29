#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **arr;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return NULL;

	arr = malloc(sizeof(hash_node_t) * size);
	if (arr == NULL)
		return NULL;

	new->size = size;
	new->array = arr;

	return (new);
}
