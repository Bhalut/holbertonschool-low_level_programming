#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (!h->str)
	{
		printf("[0] (nil)\n");
		h = h->next;
	}

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
