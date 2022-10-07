#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: The byte size of each array element.
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *p;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	p = a;

	for (index = 0; index < (size * nmemb); index++)
		p[index] = '\0';

	return (a);
}
