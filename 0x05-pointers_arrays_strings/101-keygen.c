#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates keygen
 * @pass: password
 * @rand: random
 * Return: 0 (Always)
 */

int main(void)
{
	int pass[100];
	int l, sum, m;

	sum = 0;
	srand(time(NULL));

	while (l < 100)
	{
		pass[l] = rand() % 80;
		sum += (pass[l] + '0');
		_putchar(pass[l] + '0');

		if ((3880 - sum) - '0' < 80)
		{
			m = 3880 - sum - '0';
			sum += m;
			_putchar(m + '0');
			break;

		}
		l++;
	}
	return (0);
}
