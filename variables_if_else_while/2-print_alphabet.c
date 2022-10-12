#include <stdio.h>

/**
 * main - print alphabet
 * Return: value must return to 0
 */
int main(void)
{
    char x;

	for (x = 'a'; x <= 'z'; x++)
    {
        putchar(x);
    }
    putchar('\n');
    return 0;
}
