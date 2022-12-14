#include "main.h"
/**
 * string_nconcat - function
 * @s1: str
 * @s2: str
 * @n: var
 * Return: pointer, NULL for fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, z = 0, total = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (y = 0; s1[y] != '\0'; y++)
	{
	}
	for (z = 0; s2[z] != '\0'; z++)
	{
	}
	c = malloc(sizeof(char) * (y + n + 1));

	if (c == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		c[x] = s1[x];

	while (total < n && s2[total] != 0)
	{
		c[total + y] = s2[total];
		total++;
	}
	c[total + y] = '\0';

	return (c);
}
