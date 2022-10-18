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

	for (x = (length - 1) / 2; x < length; x++)
	{
		printf("%c", str[x]);
	}
	printf("\n");
}
