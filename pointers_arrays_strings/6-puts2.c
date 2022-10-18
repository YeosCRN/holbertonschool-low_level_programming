#include "main.h"

/**
 * puts2 - code
 * @str: pointer
 */
void puts2(char *str)
{
	int x, length;

	length = strlen(str);

	for (x = 0; x < length; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x + 0]);
		}
	}
	_putchar(10);
}
