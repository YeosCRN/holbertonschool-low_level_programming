#include <stdio.h>

/**
 * main - print numbers with putchar
 * Return: value must return to 0
 */
int main(void)
{
	int x;
	
	for (x = 48; x <= 57; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
