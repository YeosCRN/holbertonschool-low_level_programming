#include "main.h"

/**
 * print_chessboard - code
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int x, y, colunm;

	colunm = sizeof(a[0]) / sizeof(a[0][0]);
	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < colunm; y++)
		{
			printf("%c", a[x][y]);
		}
		printf("\n");
	}
}
