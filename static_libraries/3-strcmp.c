#include "main.h"

/**
 * _strcmp - code
 * @s1: pointer
 * @s2: pointer
 * Return: 0
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
		}
		x++;
	}
	return (0);
}
