#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: This is the C string to be scanned
 * @accept: character in str1 that matches one of the characters in str2
 *
 * Return: string s that matches any character specified in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int l, m;

	for (l = 0; *(s + l); l++)
	{
		for (m = 0; *(accept + m); m++)
			if (*(s + l) == *(accept + m))
			{
				break;
			}

		if (*(accept + m) != '\0')
		{
			return (s + l);
		}
	}

	return (0);
}
