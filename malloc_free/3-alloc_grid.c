#include "main.h"
/**
 * str_concat - function
 * @s1: str
 * @s2: str
 * Return: pointer, NULL for fail
 */
int **alloc_grid(int width, int height)
{
	int x, y, z;
	int **a;

	if (width < 0 || height < 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);
		if (a[x] == NULL)
		{
			return (NULL);
		}
	}
	return (a);
}