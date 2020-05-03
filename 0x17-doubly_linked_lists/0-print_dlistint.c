#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: double linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
