#include "main.h"

/**
 * _strpbrk - code
 * @s: pointer
 * @accept: pointer
 * Return: s after finding str
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y, z, stop;

	x = 0;
	z = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
			y++;
		}
		x++;
	}
	return (NULL);
}