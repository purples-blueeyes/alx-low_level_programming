#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name.
 * @argc: arguement count.
 * @argv: argument value
 *
 * Return: 0 (Always on success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
