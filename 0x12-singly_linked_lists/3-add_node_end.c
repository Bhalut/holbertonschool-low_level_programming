#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - return size of array char
 * @s: pointer integer
 * Return: size of array char
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: linked lists
 * @str: string to linked
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));
	list_t *lastNode = (*head);

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;

	if (!(*head))
	{
		(*head) = newNode;
		return (*head);
	}

	while (lastNode->next)
		lastNode = lastNode->next;

	lastNode->next = newNode;

	return (newNode);
}
