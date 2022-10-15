#include "variadic_functions.h"

/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 *
 * Return: All the parameters.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int l;

	va_start(list, n);

	for (l = 0; l < n; l++)
	{
		printf("%d", va_arg(list, int));

		if (separator && l < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
