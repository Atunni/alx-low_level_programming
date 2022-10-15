#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *Return: Always 0
*/

int main(void)
{
	int n = rand() - RAND_MAX / 2;

	srand(time(0))

	if (n > 0)
	{
	printf("%d is positive\n");
	}
	else if (n == 0)
	{
	printf("%d is zero\n");
	}
	else if (n < 0)
	{
	printf("%d is negative\n");
	}
return (0);
}
