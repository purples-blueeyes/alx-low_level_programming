#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add to
 *
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *kilo = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (kilo);
}
