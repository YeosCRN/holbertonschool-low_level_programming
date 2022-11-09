#include "function_pointers.h"

/**
 * print_name - code
 * @name: pointer
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
