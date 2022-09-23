#include "main.h"
#include <stdio.h>

/**
 * print_buffer - C function that prints the content of an
 * inputted number per line
 * prints 10 bytes per line.
 * start with the position of the first byte in hexadecimal (8 characters)
 * starting with '0'
 * The content of the buffer is shown by each line.
 * 2 bytes at a time, separated by a space
 * The content of the buffer is shown by each line.
 * print the byte if it is printable; if not, print '.'
 * each line ends with a new line '\n'
 *
 * @b: number of bytes.
 * @size: size of the byte
 */

void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				printf("  ");
			else
				printf("%02x", *(b + index + byte));
			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				break;
			else if (*(b + index + byte) >= 31 &&
					*(b + index + byte) <= 126)
				printf("%c", *(b + index + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
