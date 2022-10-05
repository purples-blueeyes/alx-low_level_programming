#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int pos, aux, tot, cha;
	int coins[] = {25, 10, 5, 2, 1}; /*Array int*/

	pos = aux = tot = cha = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/*Covert str to int*/
	tot = atoi(argv[1]);

	if (tot <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[pos] != '\0')
	{
		if (tot >= coins[pos])
		{
			aux = (tot / coins[pos]);
			cha += aux;
			tot -= coins[pos] * aux;
		}

		pos++;
	}
	printf("%d\n", cha);
	return (0);
}
