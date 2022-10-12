#include <stdio.h>

/**
 * main - print alphabts
 *  Return: value must return to 0
 */
int main(void)
{
    char x = 'a';

    while (x <= 'z')
    {
        if (x != 'e' && x != 'q')
        putchar(x);
        x++;
    }
    putchar('\n');
    return (0);
}
