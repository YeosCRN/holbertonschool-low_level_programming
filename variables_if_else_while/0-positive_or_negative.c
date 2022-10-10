#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - program will be able to determite if random generated number is positive, negative or zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if (n < 0)
    printf("%d is negative");
   	else if (n > 0)
    printf("%d is positive");
    else
    printf("%d is zero");
    scanf("%d", &n);
	return (0);
}