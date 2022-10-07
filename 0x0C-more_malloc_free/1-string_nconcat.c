#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int size0 = 0, size1 = 0, l;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size0] != '\0')
	{
		size0++;
	}

	while (s2[size1] != '\0')
	{
		size1++;
	}

	if (n > size1)
		n = size1;
	a = malloc((size0 + n + 1) * sizeof(char));

	if (a == NULL)
		return (0);

	for (l = 0; l < size0; l++)
	{
		a[l] = s1[l];
	}

	for (; l < (size0 + n); l++)
	{
		a[l] = s2[l - size0];
	}

	a[l] = '\0';

	return (a);
}

