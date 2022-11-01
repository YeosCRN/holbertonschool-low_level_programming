#include "main.h"
/**
 * _strdup - function
 * @str: str
 * Return: pointer, NULL for fail
 */
char *_strdup(char *str)
{
	int x, y;
	char *c;

	if (str == NULL)
		return (NULL);

	if (c == NULL)
		return (NULL);

	for (y = 0; str[y] != '\0'; y++)
		c = malloc(sizeof(char) * (y + 1));

	for (x = 0; str[x] != '\0'; x++)
		c[x] = str[x];

	return (c);
}
