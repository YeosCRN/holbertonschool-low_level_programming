#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: int
 */
void print_triangle(int size)
{
	char x, y;

	if (size > 0)
	{
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if ((size - x) < y)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar(10);
	}
	}
	else
	{
		_putchar(10);
	}
}
