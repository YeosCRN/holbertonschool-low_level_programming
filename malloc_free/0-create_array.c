#include "main.h"
/**
 * create_array - function
 * @size: var
 * @c: var
 * Return: pointer, NULL for fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	for (x = 0; x < size; x++)
		a[x] = c;

	if (a == NULL)
		return (NULL);

	return (a);
}
