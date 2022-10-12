#include <stdio.h>

/**
 * main - print numbers with putchar
 * Return: value must return to 0
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
	{
	putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
	putchar(y);
	}
	putchar('\n');
	return (0);
}
