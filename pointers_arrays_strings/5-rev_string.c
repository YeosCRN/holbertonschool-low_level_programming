#include "main.h"

/**
 * rev_string - code
 * @s: pointer
 */
void rev_string(char *s)
{
	int length, x;
	char *begin, *end, temporal;

	length = strlen(s);
	begin = s;
	end = s;

	for (x = 0; x < length - 1; x++)
		end++;

	for (x = 0; x < length / 2; x++)
	{
		temporal = *end;
		*end = *begin;
		*begin = temporal;

		begin++;
		end--;
	}
}
