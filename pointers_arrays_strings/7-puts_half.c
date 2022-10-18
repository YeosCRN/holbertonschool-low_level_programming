#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - code
 * @str: pointer
 */
void puts_half(char *str)
{
	int x, length;

	length = strlen(str);

	for (x = (length) / 2; x < length; x++)
	{
		if (x = (length - 1) / 2)
			printf("%c", str[x]);
		else
			printf("%c", str[x]);
	}
	printf("\n");
}
