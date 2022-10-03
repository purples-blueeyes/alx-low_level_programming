#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * and initializes it with a specific char.
 * @size: number elements array
 * @c: char
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *create;
	unsigned int l;

	if (size == 0)
	{
		return (NULL);
	}

	create = malloc(sizeof(char) * size);

	if (create == NULL)
		return (NULL);
	for (l = 0; i < size; l++)
	{
		create[l] = c;
	}
	return (create);
}
