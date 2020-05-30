#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	tmp = ht->array[key_index((unsigned char *)key, ht->size)];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}
