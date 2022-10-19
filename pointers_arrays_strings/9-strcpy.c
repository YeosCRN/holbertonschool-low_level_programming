#include "main.h"
/**
 * _strcpy - code
 * @dest: pointer
 * @src: pointer
 */
char *_strcpy(char *dest, char *src)
{
	size_t n;
	size_t i;

	n = strlen(src);
	for (i = 0; i < n; i++)
		 dest[i] = src[i];
	if (i == n)
		 dest[i] = '\0';
	return (dest);
}
