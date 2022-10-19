#include "main.h"

/**
 * _islower - prints funtion that print lower case character
 * @c: c
 *
 *Return: int
 */

int _islower(int c)
{
	int x;

	for (c >= 'a' && c <= 'z')
		x = 1;

	else

		x = 0;

	return (x);


}
