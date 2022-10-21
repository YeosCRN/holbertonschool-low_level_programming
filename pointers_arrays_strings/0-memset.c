#include "main.h"

/**
 * _memset - code
 * @s: pointer
 * @b: var
 * @n: var
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}