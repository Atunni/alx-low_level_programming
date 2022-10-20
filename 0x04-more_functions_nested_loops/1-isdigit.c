#include "main.h"

/**
 * _isdigit - prints function that checks for a digit (0 through 9)
 *
 *@c:c
 *
 * Return: 0
 */

int _isdigit(int c)
{
	int x;

	if (c >= '0' && c <= '9')
		x = 1;
	else
		x = 0;

	return (x);

}
