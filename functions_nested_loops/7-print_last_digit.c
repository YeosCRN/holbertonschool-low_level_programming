#include "main.h"

/**
 * print_last_digit - print last digit
 * @x: - to find
 * Return: y
 */
int print_last_digit(int x)
{
	int y = x % 10;

	if (x < 0)
		y = (-1) * y;

	_putchar(y);

	return (y);
}
