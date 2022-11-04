#include "main.h"
/**
 * _calloc - function
 * @nmemb: var
 * @size: var
 * Return: array, NULL for fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);

	for (x = 0; x < nmemb * size; x++)
		a[x] = 0;

	return (a);
}
