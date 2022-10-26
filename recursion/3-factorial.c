#include "main.h"
/**
 * factorial - code
 * @n: var
 * Return: fatorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
