#include "main.h"

/**
 * _strncat - code
 * @dest: pointer
 * @src: pointer
 * @n: var
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

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
