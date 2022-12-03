#include "lists.h"
/**
 * free_list - code
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *bck;

	while (head)
	{
		bck = head;
		head = head->next;
		free(bck->str);
		free(bck);
	}
	free(head);
}
