#include "variadic_functions.h"

/**
 * print_strings - A function that print strings followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int l;
	char *string;

	va_start(list, n);

	for (l = 0; l < n; l++)
	{
		string = va_arg(list, char*);

		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (l < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
