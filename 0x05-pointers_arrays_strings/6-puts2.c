#include "main.h"

/**
 * puts2 - print alternating characters of string.
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int l;

	l = 0;

	while (str[l] != '\0')
	{
		if (l % 2 == 0)
			_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
