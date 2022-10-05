#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string, NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *n_str;
	unsigned int a, b, size, l, m;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	a = 0;

	while (s1[a] != '\0')
		a++;
	b = 0;

	while (s2[b] != '\0')
		b++;
	size = a + b;

	n_str = malloc((sizeof(char) * size) + 1);

	if (n_str == NULL)
		return (NULL);

	for (l = 0; l < a; l++)
	{
		n_str[l] = s1[l];
	}
	m = 0;

	while (l <= size)
	{
		n_str[l] = s2[m];
		l++;
		m++;
	}
	return (n_str);
}
