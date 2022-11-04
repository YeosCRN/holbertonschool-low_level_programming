#include "main.h"
/**
 * create_array - function
 * @size: var
 * @c: var
 * Return: pointer, NULL for fail
 */
int *array_range(int min, int max)
{
    int x;
    int *a;

    if (min > max)
        return (NULL);

    a = malloc(sizeof(int) * (max - min + 1));
    if (a == NULL)
        return (NULL);

    for (x = 0; x < min - max + 1; x++)
        a[x] = min++;

    return (a);
}
