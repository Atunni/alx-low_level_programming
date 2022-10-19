#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 *@n:n
 *
 * Return: int
 */

int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		_putchar('+');
		x = 1;
	}

	else if (n == 0)
	{
		_putchar('0');
		x = 0;
	}

	else
	{	_putchar('_');
		x = -1;
	}

}
