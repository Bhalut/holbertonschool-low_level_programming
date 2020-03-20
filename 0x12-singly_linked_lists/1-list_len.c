#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: Listed lists
 * Return: counter
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
