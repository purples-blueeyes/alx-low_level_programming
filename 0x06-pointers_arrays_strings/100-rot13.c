#include <stdio.h>
#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 * @s: string to be encoded
 *
 * Return: the resulting string
 */

char *rot13(char *s)
{
	int i, j;

	char b[] = "She is learning to code.";
	char c[] = "Yes yes yes. Arigatou.";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (s[i] == b[j])
			{
				s[i] = c[j];
				break;
			}
		}
	}

	return (s);
}
