#include "main.h"

/**
 * _strcpy - copies the string pointed to by src into dest
 * @src: source
 * @dest: destination
 *
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; *(src + l) != '\0'; l++)
	{
		dest[l] = *(src + l);
	}
	dest[l] = '\0';

	return (dest);
}
