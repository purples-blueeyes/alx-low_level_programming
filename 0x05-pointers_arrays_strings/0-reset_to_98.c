#include <unistd.h>
#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int
 * @n: parameter
 * updates the value it points to 98
 *
 * Return: 0 (Always)
 */

void reset_to_98(int *n)
{
	*n = 98;
}
