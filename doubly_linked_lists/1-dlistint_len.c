#include "lists.h"

/**
 * dlistint_len - code
 * @h: pointer
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
