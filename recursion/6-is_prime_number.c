#include "main.h"

int prime(int n, int y);

/**
 * prime - code
 * @n: var
 * @y: var
 * Return: prime
 */
int prime(int n, int y)
{
	if (n == y)
		return (1);
	else if (n % y == 0)
		return (0);

	return (prime(n, y + 1));
}
/**
 * is_prime_number - code
 * @n: var
 * Return: prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
