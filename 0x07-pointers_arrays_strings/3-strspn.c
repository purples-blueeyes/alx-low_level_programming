#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 */

unsigned int _strspn(char *s, char *accept)
{
	int l, m;

	for (m = 0; *(s + m); m++)
	{
		for (l = 0; *(accept + l); l++)
		{
			if (*(s + m) == *(accept + l))
				break;
		}

		if (*(accept + l) == '\0')
			break;
	}

	return (m);
}
