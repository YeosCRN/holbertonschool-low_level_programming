#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print 9 times table
 * Return: to 0
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		if (n == 98)
		{
			printf("%d", n);
		}
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		if (n == 98)
		{
			printf("%d", n);
		}
		n--;
	}
	if (n == 98)
	{
		printf("98");
	}
	printf("\n");
}
