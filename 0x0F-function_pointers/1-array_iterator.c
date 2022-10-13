#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given, each el of the array
 * @array: the array
 * @size: the size of the array
 * @action: pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int l;

	if (!array || !action)
		return;

	for (l = 0; l < size; l++)
		action(array[l]);
}
