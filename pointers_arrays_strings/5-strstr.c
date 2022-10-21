#include "main.h"

/**
 * _strpbrk - code
 * @s: pointer
 * @accept: pointer
 * Return: s after finding str
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
        x++;
    }
    return (NULL);
}
