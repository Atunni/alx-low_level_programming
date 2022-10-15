#include <stdio.h>

/**
 * main - prints all alphabet except q and e
 *Return: returns 0
 */

int main(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		if (lw != 'e' && lw != 'q')
		{
			putchar(lw);
		}
		else
		{
		}
	}

	putchar('\n');

	return (0);

}
