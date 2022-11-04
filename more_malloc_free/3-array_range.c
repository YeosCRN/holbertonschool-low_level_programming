#include "main.h"
/**
 * create_array - function
 * @size: var
 * @c: var
 * Return: pointer, NULL for fail
 */
int *array_range(int min, int max)
{
    int x, mid;
    int *a;

    if (min > max)
        return (NULL);

    mid = max - min + 1;

    a = malloc(sizeof(int) * mid);
    if (a == NULL)
        return (NULL);

    for (x = 0; x < mid; x++)
        a[x] = min++;

    return (a);
}
