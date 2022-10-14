#include "main.h"
#include <stdio.h>

/**
 * main - fizzbuzz
 * Return: return to 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf("Buzz");
			if (x < 100)
			{
				printf(" ");
			}
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
	return (0);
}
