#include "lists.h"

/**
 * add_nodeint_end - code
 * @head: pointer
 * @n: var
 * Return: *head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *dpc, *current;

	dpc = malloc(sizeof(listint_t));
	if (dpc == NULL)
		return (NULL);
	dpc->n = n;
	dpc->next = NULL;
	if (*head == NULL)
	{
		*head = dpc;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = dpc;
	return (*head);
}
