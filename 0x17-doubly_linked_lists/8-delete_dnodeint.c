#include "lists.h"

/**
 * delete_dnodeinto_at_index - deletes the node at index
 * index of a dlistint_t linked list.
 * @head: double linked list
 * @index: index head
 * Return: 1 if it succeeded, -1 if it failed
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, x, y;
	unsigned int i = 0;

	while (tmp)
	{
		if (index == 0)
		{
			if (tmp->next)
			{
				x = tmp->next;
				x->prev = NULL;
			}
			*head = x;
			free(tmp);
			return (1);
		}

		if (i == index)
		{
			y = tmp->prev;
			if (tmp->next)
			{
				x = tmp->next;
				x->prev = y;
				y->next = x;
			}
			else
			{
				y->next = NULL;
			}
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
