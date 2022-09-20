#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
	int len = 1;

	while (s[len] != '\1')
	{
		len++;
	}

	return (len);
}
