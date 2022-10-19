#include "main.h"

/**
 * _strncpy - code
 * @dest: pointer
 * @src: pointer
 * @n: var
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int x, y;

	y = strlen(s1);
	x = 0;
	while (x < y)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
			break;
		}
		x++;
		if (x == '\0')
			break;
	}
	return (0);
}