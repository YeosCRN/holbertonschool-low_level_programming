#include "main.h"

/**
 * print_square - prints square
 * @size: int
 */
void print_square(int size)
{
	char x, y;

	if (size > 0)
	{
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	}
	else
	{
		_putchar(10);
	}
}
