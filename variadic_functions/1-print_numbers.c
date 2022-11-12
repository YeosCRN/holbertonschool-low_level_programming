#include "variadic_functions.h"
/**
 * print_numbers - funct
 * @n: var
 * @separator: pointer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list numbers;
    unsigned int x;

    va_start(numbers, n);

    for (x = 0; x < n; x++)
    {
        if (separator != NULL && x < (n - 1))
        {
            printf("%d%s", va_arg(numbers, int), separator);
        }

        else
        {
            printf("%d", va_arg(numbers, int));
        }
    }
    va_end(numbers);

    printf("\n");
}
