#include "main.h"

/**
 * string_toupper - code
 * @scr: pointer
 * Return: scr
 */
char *string_toupper(char *scr)
{
	int x, y;

	x = strlen(scr);
	for (y = 0; y < x; y++)
	{
		if (scr[y] >= 'a' && scr[y] <= 'z')
		{
			scr[y] = scr[y] - 32;
		}
	}
	return (scr);
}
