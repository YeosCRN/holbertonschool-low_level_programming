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
			if (haystack[x] == needle[y] && haystack[x + 1] == needle[y + 1])
			{
				return (haystack + x);
			}
			y++;
		}
	}
	if (needle[y] == '\0')
	{
		return (haystack);
	}
	x++;
	return (NULL);
}
