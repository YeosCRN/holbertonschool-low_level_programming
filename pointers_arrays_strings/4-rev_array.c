#include "main.h"

/**
 * rev_string - code
 * @a: pointer
 * @n: var  
 */
void reverse_array(int *a, int n)
{
    int length, x;
    int *begin, *end, temporal;

    length = sizeof(a);
    x = sizeof(int);
    begin = a;
    end = a;

    for (n = 0; n < length + x; n++)
        end++;

    for (n = 0; n < length / 2; n++)
    {
        temporal = *end;
        *end = *begin;
        *begin = temporal;

        begin++;
        end--;
    }
}
