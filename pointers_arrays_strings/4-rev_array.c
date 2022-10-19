#include "main.h"

/**
 * rev_string - code
 * @a: pointer
 * @n: var  
 */
void reverse_array(int *a, int n)
{
    int x, temporal;

    for (x = 0; x <= (n / 2); x++)
    {
        temporal = a[n - x - 1];
        a[n - x - 1] = a[x];
        a[x] = temporal;

    }
}
