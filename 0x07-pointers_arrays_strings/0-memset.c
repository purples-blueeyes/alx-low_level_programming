#include "main.h"

/**
 * _memset -   fills memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: value to set
 * @n: bytes of the memory
 *
 * Return: Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned short int l = 0;

	/*Declaring for*/
	for (; l < n; l++)
	{
		*(s + l) = b;
	}

	return (s);
}

