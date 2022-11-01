#include "main.h"
/**
 * str_concat - function
 * @s1: str
 * @s2: str
 * Return: pointer, NULL for fail
 */
char *str_concat(char *s1, char *s2)
{
	int x, y, z, total;
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
	c = malloc(sizeof(char) * (y + z + 1));

	if (c == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		c[x] = s1[x];

	for (total = 0; s2[total] != '\0'; total++)
		c[total + y] = s2[total];

	return (c);
}
