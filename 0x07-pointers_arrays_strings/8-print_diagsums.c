#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: pointer to array
 * @size: number matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int l;
	int sum5, sum6;

	sum5 = 0;
	sum6 = 0;

	l = 0;

	while (l < size)
	{
		/*sums for diagsums*/
		sum5 = sum5 + *(a + l * size + l);
		sum6 = sum6 + *(a + l * size + size - l - 1);

		l++;
	}

	printf("%i, %i\n", sum5, sum6);
}
