#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
