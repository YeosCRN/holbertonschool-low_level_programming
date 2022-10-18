#include "main.h"

/**
 * puts_half - code
 * @str: pointer
 */
void puts_half(char *str)
{
	char x, length;

	length = strlen(str);

	for (x = (length) / 2; x < length; x++)
	{
		if (x == (length - 1) / 2)
			_putchar(str[x + 1]);
		else
			_putchar(str[x + 0]);
	}
	_putchar(10);
}
