#include "main.h"

/**
 * _strpbrk - code
 * @s: pointer
 * @accept: pointer
 * Return: s after finding str
 */
char *_strpbrk(char *s, char *accept)
{
    int x, y;

    y = strlen(s);
    x = 0;
    while (x < y)
    {
        if (s[x] == accept[x] && s[x] != '\0')
        {
            return (s + x - 1);
        }
        x++;
    }
    if (accept == '\0')
    {
        return (s + x - 1);
    }
    return (NULL);
}
