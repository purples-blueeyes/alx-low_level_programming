#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print product of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (If true) and 1 (If false)
 */

int main(int argc, char *argv[])
{
	int l, m;

	if (argc == 3)
	{
		l = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", l * m);
		return (0);
	}
	printf("Error\n");
	return (1);
}
