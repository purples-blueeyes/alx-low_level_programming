#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add
 * @argc: integer
 * @argv: string
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int l, m, sum = 0;

	for (l = 1; l < argc; l++)
	{
		for (m = 0; argv[l][m] != '\0'; m++)
		{
			if (!isdigit(argv[l][m]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[l]);
	}
	printf("%d\n", sum);
	return (0);
}
