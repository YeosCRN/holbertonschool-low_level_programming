#include "main.h"

/**
 * _memset - code
 * @s: pointer
 * @b: var
 * @n: var
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}