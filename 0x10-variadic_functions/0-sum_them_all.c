#include "variadic_functions.h"

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: number of parameters
 *
 * Return: All of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int l;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (l = 0; l < n; l++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
