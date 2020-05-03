/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double linked list
 * @n: number member
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	while (*head)
		*head = (*head)->next;

	new->n = n;
	new->prev = *head;
	new->next = NULL;

	(*head)->next = new;

	return (new);
}
