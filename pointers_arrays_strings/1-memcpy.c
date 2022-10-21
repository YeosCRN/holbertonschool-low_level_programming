#include "main.h"

/**
 * _memcpy - code
 * @dest: pointer
 * @src: pointer
 * @n: var
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
