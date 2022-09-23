#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 *
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n && src[l] != '\0'; l++)
		dest[l] = src[l];

	for (; l < n; l++)
		dest[l] = '\0';

	return (dest);
}
