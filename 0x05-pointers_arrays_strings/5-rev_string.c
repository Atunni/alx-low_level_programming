#include "main.h"

/**
 * rev_string - prints functions that reverses a spring
 * @s: input string
 * Return: no return
 */

void rev_string(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
