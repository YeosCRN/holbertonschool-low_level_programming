#include "main.h"
/**
 * _abs - entry point
 * @n:number
 * Return: 0
 */
int _abs(int n)
{
    if (n < 0)
    {
        n = (-1) * n;
        return (n);
    }
    else
        return (n);
}