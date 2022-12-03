#include "lists.h"

/**
 * print_list - code
 * @h: pointer
 * Return: x
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			x += 1;
		}

		printf("[%d] %s\n", h->len, h->str);
		x += 1;
		h = h->next;
	}
	return (x);
}
