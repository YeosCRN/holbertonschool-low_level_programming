#include "main.h"
/**
 * sqtr - code
 * @n: var
 * @y: var
 * Return: sqtr
 */
int sqtr(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y > n)
		return (-1);

	return (sqtr(n, y + 1));
}
/**
 * _sqrt_recursion - code
 * @n: var
 * Return: sqtr
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqtr(n, 1));
}
