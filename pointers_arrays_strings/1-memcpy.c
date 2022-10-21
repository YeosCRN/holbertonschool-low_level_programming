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
	{
		unsigned int x, y;

		y = strlen(dest);
		for (x = 0; x < n; x++)
		{
			dest[y + x] = src[x];
			if (src[x] == '\0')
			{
				break;
			}
		}
		return (dest);
	}
}