#include "main.h"

/**
 * _isupper - prints function that checks for uppercase character
 *
 *@c:c
 *
 * Return: int
 */

int _isupper(int c)
{
	int x;

	if (c >= 'A' && c <= 'Z')
		x = 1;
	else
		x = 0;

	return (x);

}
