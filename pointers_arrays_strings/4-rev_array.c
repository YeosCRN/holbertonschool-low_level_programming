#include "main.h"

/**
 * reverse_array - code
 * @a: pointer
 * @n: var
 */
void reverse_array(int *a, int n)
{
	int x, temporal;

	if (n > 0)
	{
		for (x = 0; x <= (n / 2); x++)
		{
			temporal = a[n - x - 1];
			a[n - x - 1] = a[x];
			a[x] = temporal;
		}
	}
}
