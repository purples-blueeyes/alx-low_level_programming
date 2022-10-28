#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: If big-endian - 0.
 * 1 if little endian
 */

int get_endianness(void)
{
	unsigned int k;
	char *c;

	k = 1;
	c = (char *) &k;
	return ((int)*c);
}
