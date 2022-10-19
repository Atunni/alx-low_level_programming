#include "main.h"

/**
 * _islower - prints funtion that print lower case character
 * @c: The character to be checked
 *Return: returns 1 if character is lowercase and 0 if otherwise
 */

int _islower(int c);
{
	int c;

	for (c = 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
