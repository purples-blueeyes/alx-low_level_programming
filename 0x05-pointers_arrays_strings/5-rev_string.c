#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int l, max, half;
	char first, last;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	max = l - 1;
	half = max / 2;

	for (; half >= 0; half--)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
	}
}
