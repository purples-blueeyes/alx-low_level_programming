#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: interger to be printed
 */

void print_number(int n)
{
	unsigned int b;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	b = n;

	if (b / 10)
		print_number(b / 10);

	putchar(b % 10 + '0');
}
