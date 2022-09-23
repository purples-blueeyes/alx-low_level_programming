#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a  string
 * to uppercae letters.
 * @s: string to modify
 *
 * Return: the string that results
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 42;
		s++;
	}
	return (start);
}
