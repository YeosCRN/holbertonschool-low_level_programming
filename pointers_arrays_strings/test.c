#include "main.h"

/**
 * leet - code
 * @scr: pointer
 * Return: scr
 */
char *leet(char *scr)
{
	int x, y, z;
	char a[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	char b[] = {52, 51, 48, 55, 49};

	y = strlen(scr);
	x = 0;
	while (x < y)
	{
		for (z = 0; z <= 9; z++)
		{
			if (scr[x] == a[z])
			{
				a[0] = b[0];
				a[1] = b[0];
				a[2] = b[1];
				a[3] = b[1];
				a[4] = b[2];
				a[5] = b[2];
				a[6] = b[3];
				a[7] = b[3];
				a[8] = b[4];
				a[9] = b[4];
			}
		}
		x++;
	}
	return (scr);
}
