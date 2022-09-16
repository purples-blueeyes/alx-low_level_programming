#include "main.h"

/**
 * _isupper - checks or finds out if the parameter is an uppercase character
 * @c: input character
 * Return: 1 (If it is an uppercase character. but 0 if otherwise)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
