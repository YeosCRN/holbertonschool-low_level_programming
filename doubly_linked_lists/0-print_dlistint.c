#include "lists.h"

/**
 * print_dlistint - code
 * @h: pointer
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
