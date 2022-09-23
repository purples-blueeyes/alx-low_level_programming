#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: string to modify
 *
 * Return: the resulting string.
 */

char *cap_string(char *s)
{
	int b = 0, l;
	int cspc = 13;

	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[b])
	{
		l = 0;

		while (l < cspc)
		{
			if ((b == 0 || s[b - 1] == spc[l]) && (s[b] >= 97 && s[b] <= 122))
				s[b] -= 32;
			l++;
		}
		b++;
	}

	return (s);
}
