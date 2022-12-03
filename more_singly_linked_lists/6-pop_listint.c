#include "lists.h"

/**
 * pop_listint - code
 * @head: pointer
 * Return: x
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *current, *bck;

	if (head == NULL)
		return (0);
	bck = current = *head;
	if (*head)
	{
		x = current->n;
		*head = current->next;
		free(bck);
	}
	else
		x = 0;
	return (x);
}
