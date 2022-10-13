#include "main.h"

/**
 * print_last_digit - print last digit
 * @x: - to find
 * Return: y
 */
int print_last_digit(int n)
{
	int y;

	y = n % 10;

	if (n < 0)
		y = (-1) * y;

	_putchar(y + '0');

	return (y);
}
