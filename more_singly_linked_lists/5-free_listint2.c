#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - code
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *bck, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		bck = current;
		current = current->next;
		free(bck);
	}
	*head = NULL;
}
