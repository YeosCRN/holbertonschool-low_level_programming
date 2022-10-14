#include "main.h"

/**
 * print_diagonal - prints line
 * @n: int
 */
void print_diagonal(int n)
{
	char x, y;

	if (n <= 0)
	{
		_putchar(10);
	}

	while (y <= n)
	{
		if (y > 0)
		{
			for (x = 1; x <= y; x++)
			{
				if (x > 1)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar(10);
		}
		y++;
	}
}
