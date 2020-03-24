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
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: linked lists
 * @idx: index to linked list
 * @n: number to linked list[index]
 * Return: node by index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node = *head;
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);

	if (idx > _listint_len(*head))
		return (NULL);

	while (node && i < idx)
	{
		node = node->next;
		i++;
	}

	if (!node)
		return (NULL);

	newNode->n = n;
	newNode->next = node->next;
	node->next = newNode;

	return (newNode);
}
