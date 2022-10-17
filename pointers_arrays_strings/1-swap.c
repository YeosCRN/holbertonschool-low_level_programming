#include "main.h"

/**
 * swap_int - reset to 98
 * @a: pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int x = 0;

	x = *a;
	*a = *b;
	*b = x;
}
