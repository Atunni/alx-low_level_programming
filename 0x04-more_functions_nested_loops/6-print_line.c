#include "main.h"

/**
 * print_line - prints s straight line
 *
 * @n:n
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
