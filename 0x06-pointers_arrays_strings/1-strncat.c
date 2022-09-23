#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 *
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, l = 0;
	char *kilo = dest, *stop = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;
	src = stop;

	for (; l < n; l++)
		*dest++ = *src++;
	*dest = '\0';

	return (kilo);
}
