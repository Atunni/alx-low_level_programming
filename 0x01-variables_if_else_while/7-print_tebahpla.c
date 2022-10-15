#include <stdio.h>

/**
 * main - This program prints the lowercase alphabet in reverse.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lw;

	for (lw = 'z'; lw >= 'a'; lw--)

	{
		putchar(lw);
	}

	putchar('\n');

	return (0);
}
