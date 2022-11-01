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

	if (a == NULL)
		return (NULL);

	return (a);
}
