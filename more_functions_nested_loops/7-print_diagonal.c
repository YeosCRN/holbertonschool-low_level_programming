#include "main.h"

/**
 * print_diagonal - prints line
 * @n: int
 */
void print_diagonal(int n)
{
	char x, y;

	while (y < n)
	{
		if (y > 0)
		{
			for (x = 1; x <= y; x++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
		else
		{
			_putchar(10);
		}
		y++;
	}
}
