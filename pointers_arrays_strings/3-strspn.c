#include "main.h"

/**
 * _strspn - code
 * @s: pointer
 * @accept: pointer
 * Return: dest
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z, stop;

	x = 0;
	z = 0;
	while (s[x] != '\0')
	{
		stop = 0;
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				z++;
				stop = 1;
			}
			y++;
		}
		x++;
		if (stop == 0)
		{
			return (z);
		}
	}
	return (0);
}
