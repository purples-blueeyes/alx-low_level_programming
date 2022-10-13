#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Always on Success)
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0, res = 0;
	char k;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	k = argv[2][0];
	if (k != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = (get_op_func(argv[2]))(a, b);
	printf("%d\n", res);
	return (0);
}
