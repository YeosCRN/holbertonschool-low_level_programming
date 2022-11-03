#include "main.h"
/**
 * str_concat - function
 * @s1: str
 * @s2: str
 * @n: var
 * Return: pointer, NULL for fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x = 0, y = 0, total = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (y = 0; s1[y] != '\0'; y++)
	{
	}
	c = malloc(sizeof(char) * (y + n + 1));

	if (c == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		c[x] = s1[x];

	while (total < n)
	{
		c[total + y] = s2[total];
		total++;
	}

	return (c);
}
