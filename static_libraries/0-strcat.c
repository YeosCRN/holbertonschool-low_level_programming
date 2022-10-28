#include "main.h"

/**
 * _strcat - code
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)

{
	int x, y, z;

	y = strlen(dest);
	z = strlen(src);
	for (x = y; x < (y + z); x++)
	{
		dest[x] = src[x - y];
	}
	return (dest);
}
