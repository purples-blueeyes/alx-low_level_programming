#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to newly created array.
 * NULL if malloc fails.
 * NULL if min > max.
 */

int *array_range(int min, int max)
{
	int *p, l = 0, t = min;

	if (min > max)
		return (0);
	p = malloc((max - min + 1) * sizeof(int));

	if (!p)
		return (0);

	while (l <= max - min)
		p[l++] = t++;

	return (p);
}
