#include "main.h"

/**
 * more_numbers - 0 to 14
*/
void more_numbers(void)
{
	char c, d;

	c = 0;

	while (c <= 9)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 10)
			{
				_putchar((d / 10) + '0');
			}
			_putchar((d % 10) + '0');
		}	
		_putchar('\n');
		c++;
	}	
}
