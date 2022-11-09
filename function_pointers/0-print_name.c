#include "3-calc.h"

/**
 * main - main
 * @argc: var
 * @argv: arr
 * Return: result
 */
void print_name(char *name, void (*f)(char *))
{
    if (f)
        f(name);
}