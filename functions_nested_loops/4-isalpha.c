#include "main.h"

/**
 * _isalpha - check the code
 * @c: The character to print
 * Return: return to 1 if alpha
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
