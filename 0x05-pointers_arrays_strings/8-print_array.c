#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line
 * @a: an input array
 * @n: also an input array
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int l = 0;

	while (l < n)
	{
		printf("%d", a[l]);

		if (l < n - 1)
			printf(", ");
		l++;
	}
	putchar('\n');
}
