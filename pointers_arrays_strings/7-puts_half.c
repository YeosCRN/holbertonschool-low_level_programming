#include "main.h"

/**
 * puts_half - code
 * @str: pointer
 */
void puts_half(char *str)
{
	int length, x, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (length % 2)
	{
		for (x = (length - 1) / 2; x < length - 1; x++)
		{
			_putchar(str[x + 1]);
		}
	}
	_putchar(10);
}
