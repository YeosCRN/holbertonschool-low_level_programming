#include "main.h"

/**
 * _strspn - code
 * @s: pointer
 * @accept: pointer
 * Return: dest
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	x = 0;
	y = 0;
	while (s[x] != '\0')
		x++;
	while (accept[y] != '\0')
		y++;

	return (y + 1);
}
