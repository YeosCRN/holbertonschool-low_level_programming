#include "lists.h"

/**
 * add_nodeint - code
 * @head: pointer
 * @n: var
 * Return: *head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *dpc;

	dpc = *head;
	dpc = malloc(sizeof(listint_t));
	if (dpc == NULL)
		return (NULL);
	dpc->n = n;
	dpc->next = *head;
	*head = dpc;
	return (*head);
}
