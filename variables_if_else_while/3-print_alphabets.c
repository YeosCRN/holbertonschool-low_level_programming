#include <stdio.h>

/**
 * main - print alphabets
 * Return: value must return to 0
 */
int main(void)
{
	char x, y;

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}
    for (y = 'A'; y <= 'Z'; y++)
	{
	putchar(y);
	}
	putchar('\n');
	return (0);
}