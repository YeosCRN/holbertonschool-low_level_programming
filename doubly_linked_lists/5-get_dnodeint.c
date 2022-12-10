#include "lists.h"

/**
 * get_dnodeint_at_index - code
 * @head: pointer
 * @index: var
 * Return: node, NULL if fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
