#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: parameter
 * Return 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 38 && c < 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
