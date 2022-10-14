#include "main.h"

/**
 * print_most_numbers - 0 to 9
*/
void print_most_numbers(void)
{
	char c;

	c = 0;

	while (c <= 9)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
