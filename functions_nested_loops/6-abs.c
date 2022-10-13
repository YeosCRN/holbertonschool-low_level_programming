#include "main.h"

/**
 * _abs - find absolute
 * @x: - to be displayed
 * Return: negative numbers go positive
 */
int _abs(int x)
{
	if (x >= 0)
		x = (-1) * x;
	return (-x);
}
