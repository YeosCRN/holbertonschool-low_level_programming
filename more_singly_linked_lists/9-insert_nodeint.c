#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @index: var
 * @n: var
 * Return: dpc
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current, *dpc;

	current = *head;
	dpc = malloc(sizeof(listint_t));
	if (dpc == NULL)
		return (NULL);
	dpc->n = n;
	if (index == 0)
	{
		new->next = current;
		*head = dpc;
		return (*head);
	}
	while (index > 1)
	{
		current = current->next;
		index--;
		if (!current)
		{
			free(dpc);
			return (NULL);
		}
	}
	dpc->next = current->next;
	current->next = dpc;
	return (dpc);
}
