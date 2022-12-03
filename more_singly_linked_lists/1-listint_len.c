#include "lists.h"

/**
 * listint_len - code
 * @h: pointer
 * Return: x
 */
size_t listint_len(const listint_t *h)
{
	size_t x;

	for (x = 0; h; x++)
		h = h->next;
	return (x);
}
