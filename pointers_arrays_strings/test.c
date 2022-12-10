#include "main.h"

/**
 * print_chessboard - code
 * @a: array
 */
void print_diagsums(int *a, int size)
{
	int x, y, colunm;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y += 2)
		{
			printf("%d", x + y);
		}
		printf("\n");
	}
}
