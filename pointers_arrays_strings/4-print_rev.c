#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - code
 * @s: pointer
 */
void print_rev(char *s)
{
	int x;

	for (x = strlen(s); x >= 0 ; x--)
		printf("%c", s[x]);
	printf("\n");
}
