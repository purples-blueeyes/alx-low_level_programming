#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, l, m;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		m = len / 2;

	else
		m = (len + 1) / 2;

	for (l = m; l < len; l++)
		_putchar(str[l]);
	_putchar('\n');
}
