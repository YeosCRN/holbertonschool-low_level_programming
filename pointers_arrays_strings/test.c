#include "main.h"

/**
 * _strstr - code
 * @haystack: pointer
 * @needle: pointer
 * Return: haystack after finding str
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	x = 0;
	while (haystack[x] != '\0')
	{
		y = 0;
		while (needle[y] != '\0')
		{
			if (haystack[x] == needle[y] && haystack[x + 1] == needle[y + 1] && haystack[x + 2] == needle[y + 2])
			{
				return (haystack + x);
			}
			y++;
		}
		x++;
	}
	if (needle[y] == '\0')
	{
		return (haystack);
	}
	else if (needle[y + 1] == '\0')
	{
		return (NULL);
	}

	return (NULL);
}
