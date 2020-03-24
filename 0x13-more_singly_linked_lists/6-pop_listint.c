#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - dds a new node at the beginning of a listint_t list.
 * @head: linked lists
 * @n: number to linked
 * Return: new node
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *newNode = NULL;

	if (!head)
		return (value);

	newNode = (*head)->next;
	value = (*head)->n;
	free(*head);
	(*head) = newNode;

	return value;
}
