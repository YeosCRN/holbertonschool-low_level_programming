#include "main.h"

/**
 * _strchr - code
 * @s: pointer
 * @c: var
 * Return: s after finding c
 */
char *_strchr(char *s, char c)
{
	int x, y;

	y = strlen(s);
	x = 0;
	while (x < y)
	{
		if (s[x] == c && s[x] != '\0')
		{
			return (s + x);
		}
		x++;
	}
	if (c == '\0')
	{
		return (s + x);
	}
	return (NULL);
}
