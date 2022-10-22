#include <stdio.h>

/**
 * be_main - prints a sentence before the
 * main function is executed
 * Return: void
 */

void __attribute__((constructor)) be_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
