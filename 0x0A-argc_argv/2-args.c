#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0 (Always on success)
 */

int main(int argc, char *argv[])
{
	int l;
	l = 0;

	while (l < argc)
	{
		printf("%s\n", argv[l]);
		l++;
	}
	return (0);
}
