#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: double linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_len *current;

	if (!head)
		return;

	while (head)
	{
		current = head;
		head = head->next;

		free(current);
	}

	free(head);
}
