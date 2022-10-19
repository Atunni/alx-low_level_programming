#include "main.h"

/**
 * _isalpha - prints function that search for alphabetic character
 *
 *@c:c
 *
 * Return: int
 */

int _isalpha(int c)
{
	int x;

	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
			x = 1;

	else
			x = 0;

	return (x);

}
