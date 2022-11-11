#include "variadic_functions.h"

/**
 * sum_them_all - funct
 * @n: var
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num_to_sum;
	int sum = 0, i = 0;

	if (n == 0)
		return (0);

	va_start(num_to_sum, n);

	while (i < n)
	{
		sum += va_arg(num_to_sum, int);
		i++;
	}

	va_end(num_to_sum);
	return (sum);
}
