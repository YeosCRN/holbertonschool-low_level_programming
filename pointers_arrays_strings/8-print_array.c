#include "main.h"

/**
 * print_array - code
 * @a: pointer
 * @n: var
 */
void print_array(int *a, int n)
{
	int x = 0;
	for (x = 0; x <= n - 1; x++)
	{
			printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
