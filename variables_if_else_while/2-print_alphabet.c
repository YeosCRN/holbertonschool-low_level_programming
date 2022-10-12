#include <stdio.h>

/**
 * main - print alphabet
 * Return: value must return to 0
 */
int main(void)
{
	for (int i = 'a'; i <= 'z'; i++)
    {
        i = tolower(i);
        putchar(i);
    }
    return 0;
}