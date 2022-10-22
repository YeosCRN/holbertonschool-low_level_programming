#include "main.h"

/**
 * _strstr - code
 * @haystack: pointer
 * @needle: pointer
 * Return: haystack after finding str
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y, z, l;

	l = strlen(needle);
	x = 0;
	while (haystack[x] != '\0')
	{
		y = 0;
		while (needle[y] != '\0')
		{
			z = 0;
			if (haystack[x] == needle[y] && haystack[x + 1] == needle[y + 1])
			{
				if (needle[y + 1] != '\0')
					z++;
			}
			else if (z == l - 1)
			{
				return (haystack + x - z + 1);
			}
			y++;
		}
		x++;
	}
	if (needle[y] == '\0' && haystack[x + 1] != '\0')
	{
		return (NULL);
	}
	else
		return (haystack);

	return (0);
}
