#include "main.h"

/**
 * print_line - prints line
 * @n: int
 */
void print_line(int n)
{
	char x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
		_putchar('_');
		}
		_putchar(10);
	}
	else
		_putchar(10);
}
