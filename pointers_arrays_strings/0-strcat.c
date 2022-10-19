#include "main.h"

/**
 * reset_to_98 - reset to 98
 * @n: pointer
 */
char *_strcat(char *dest, char *src)

{
	int x, y, z;

	y = strlen(dest);
	z = strlen(src);
	for (x = y; x < (y + z); x++)
	{
		dest[x] = src [x - y];
	}
	return (dest);
}
