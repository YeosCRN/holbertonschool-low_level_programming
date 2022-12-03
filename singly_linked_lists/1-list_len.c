#include "lists.h"

/**
 * list_len - code
 * @h: pointer
 * Return: x
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x += 1;
		h = h->next;
	}
	return (x);
}
