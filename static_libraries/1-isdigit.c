#include "main.h"

/**
 * _isdigit - check for digit
 * @c: int
 * Return: 1 digit
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
