#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: linked lists
 * Return: void
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
