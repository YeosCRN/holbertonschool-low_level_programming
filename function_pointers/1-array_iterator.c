#include "function_pointers.h"

/**
 * array_iterator - code
 * @array: arr
 * @size: size
 * @action: pointer
 * Return: NULL if fail
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action == NULL || array == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
