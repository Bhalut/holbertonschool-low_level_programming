#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double linked list
 * @idc: index double linked list
 * @n: number member
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		*h = new;
		new->next = tmp;
		new->prev = NULL;
		tmp->prev = new;

		return (new);
	}

	while (tmp->next)
	{
		if (i == idx)
		{
			new->prev = tmp;
			new->next = tmp->next;

			tmp->next = new;
			new->next->prev = new;
		}
		tmp = tmp->next;
		i++;
	}

	if (i < idx)
	{
		free(new);
		return (NULL);
	}

	if (i == idx)
	{
		new->prev = tmp;
		new->next = NULL;
		tmp->next = new;
	}

	return (new);
}
