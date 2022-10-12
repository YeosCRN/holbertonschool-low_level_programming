#include <stdio.h>

/**
 * main - print numbers with space
 * Return: value must return to 0
 */
int main(void)
{
	int x;

	for (x = '1'; x <= '9'; x++)
	{
	putchar(x);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
