#include <stdio.h>

/**
 * main - prints all alphabet except q and e
 *return: returns 0
 */

int main(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)

	{
		if (lw ! = 'q' && lw ! = 'e')
			putchar(lw)
	}

	putchar('\n');

	return (0);
