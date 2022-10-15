#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *Return: Return 0
 */

int main(void)
{
	int f;

	for (f = '0'; f <= '9'; f++)
	{
		putchar ((f % 10) + '0');
		if (f == 9)
			continue;

	}

	putchar (',');
	putchar ('\n');

	return (0);
}

