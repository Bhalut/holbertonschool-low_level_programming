#include <stdlib.h>
#include "lists.h"

/**
 * _listint_len - returns the number of elements in a linked listint_t list.
 * @h: linked list type listint_t
 * Return: the number of nodes
 */
size_t _listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

/**
 * get_nodeint_at_index - the number of elements in a linked listint_t list.
 * @head: linked lists
 * @index: index to linked list
 * Return: node by index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	if (index > _listint_len(head))
		return (NULL);

	for (i = 0; i < index; i++)
		node = node->next;

	return (node);
}
