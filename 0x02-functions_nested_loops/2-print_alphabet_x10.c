#include "main.h"

/**
 * print_alphabet_x10 - print lowercase 10 times
 *
 *Return: returns 0
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char y;

	while (x++ <= 9)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
