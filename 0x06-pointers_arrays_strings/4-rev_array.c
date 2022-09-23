#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the contents of an array of integers
 * @a: an array of integers
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int l, m, tmp;

	m = n - 1;

	for (l = 0; l < n / 2; l++)
	{
		tmp = a[l];
		a[l] = a[m];
		a[m--] = tmp;
	}
}
