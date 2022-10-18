#include "main.h"

/**
 * print_rev - code
 * @s: pointer
 */
void print_rev(char *s)
{
	int x;

	for (x = (strlen(s) - 1); x >= 0; x--)
		_putchar(s[x]);
	_putchar(10);
}
