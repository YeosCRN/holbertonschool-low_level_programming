#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - code
 * @str: pointer
 */
void puts2(char *str)
{
	int x, length;

	length = strlen(str);

	for (x = 0; x < length; x++)
	{
		if (x % 2 == 0)
		{
			printf("%c", str[x]);
		}
	}
	printf("\n");
}
