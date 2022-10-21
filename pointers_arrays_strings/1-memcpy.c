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
	unsigned int x, y;

	y = strlen(dest);
	x = 0;
	while (x < n)
	{
		dest[y + x] = src[x];
		if (src[x] == '\0')
		{
			break;
		}
		x++;
	}
	return (dest);
}
