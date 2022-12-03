#include "lists.h"

/**
 * get_nodeint_at_index - code
 * @head: pointer
 * @index: var
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;
	while (x < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		x++;
	}
	return (head);
}
