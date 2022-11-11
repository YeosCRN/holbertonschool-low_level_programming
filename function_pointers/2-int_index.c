#include "function_pointers.h"

/**
 * int_index - code
 * @array: arr
 * @size: size
 * @cmp: pointer
 * Return: NULL if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0, target;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}

	return (-1);
}
