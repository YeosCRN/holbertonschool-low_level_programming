#include "main.h"
/**
 * malloc_checked - function
 * @b: var
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p = NULL;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
