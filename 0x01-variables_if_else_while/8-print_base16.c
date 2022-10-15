#include <stdio.h>

/**
 * main - print all number of base 16
 *Return: Returns 0
 */

int main(void)
{
	char m;
	int n;

	for (n = '0'; n <= '9'; n++)

	{
		putchar(n);
	}

	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}

	putchar('\n');

	return (0);

}
