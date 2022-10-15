#include "variadic_functions.h"

/**
 * print_all - A function that prints anyting.
 * @format: A list of arguments passed to the function.
 * Return: Void.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	char *string;
	int l = 0;

	va_start(list, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[l])
	{
		switch (format[l])
		{
			case 'c':
				printf("%c", (char) va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(list, double));
				break;
			case 's':
				string = va_arg(list, char*);
				if (string != NULL)
				{
					printf("%s", string);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[l] == 'c' || format[l] == 'i' || format[l] == 'f' ||
					format[l] == 's') && format[(l + 1)] != '\0')
			printf(", ");
		l++;
	}
	va_end(list);
	printf("\n");
}
