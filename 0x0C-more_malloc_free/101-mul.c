#include "main.h"
#include <stdlib.h>

int _is_digit(char a);
int _is_number(char *argv);
void *_calloc(unsigned int n, unsigned int m);
void *mul_array(char *s1, int len1, char s2, char *s3, int len3);
void print_array(char *a, int nb);
int main(int argc, char *argv[]);

/**
 * _is_digit - convert a char to integer.
 * @a: character to convert
 * Return: integer
 */

int _is_digit(char a)
{
	unsigned int pes;

	if (a <= '9' && a >= '0')
		pes = a - '0';

	return (pes);
}

/**
 * _is_number - Define if a string is a number.
 * @argv: Pointer to string.
 * Return: 0 (On success)
 */

int _is_number(char *argv)
{
	int l;

	for (l = 0; argv[l]; l++)
		if (argv[l] < 48 || argv[l] > 57)
			return (1);
	return (0);
}

/**
 * _calloc - allocate array of size * n
 * @n: number of elements.
 * @m: size of element.
 * Return: pointer to array.
 */

void *_calloc(unsigned int n, unsigned int m)
{
	char *t;
	unsigned int l;

	t = malloc(m * n);


	if (t == NULL)
		return (NULL);

	for (l = 0; l < (m * n); l++)
		t[l] = '0';

	return (t);
}

/**
 * mul_array - multiply two arrays.
 * s1: first array.
 * s2: char
 * s3: array for results.
 * @len1: length of array a1.
 * @len3: length of array a3.
 * Return: pointer to array
 */

void *mul_array(char *s1, int len1, char s2, char *s3, int len3)
{
	int mul = 0, l, k;

	k = len3;
	for (l = len1 - 1; l >= 0 ; l--)
	{
		mul += (s1[l] - '0') * (s2 - '0') + (s3[k] - '0');
		s3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

	while (mul != 0)
	{
		mul += s3[k] - '0';
		s3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}
	return (s3);
}

/**
 * print_array - print all digits of array.
 * @nb: number of elements to print.
 * @a: array of elements.
 */

void print_array(char *a, int nb)
{
	int l = 0;

	while (a[l] == '0' && (l + 1) < nb)
	{
		l++;
	}

	for (; l < nb; l++)
	{
		_putchar(a[l]);
	}
	_putchar('\n');
}

/**
 * main - print the multiplication of 2 numbers.
 * @argv: array.
 * @argc: array length.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int l, c, len1, len2, lenres;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tabres;

	if (argc != 3 || _is_number(argv[1]) == 1 || _is_number(argv[2]) == 1)
	{
		for (l = 0; l < 6; l++)
		{
			_putchar(E[l]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
		;
	for (len2 = 0; argv[2][len2]; len2++)
		;
	lenres = len1 + len2;
	tabres = _calloc(lenres, sizeof(int));
	if (tabres == NULL)
	{
		free(tabres);
		return (0);
	}

	for (l = len2 - 1, c = 0; l >= 0; l--)
	{
		tabres = mul_array(argv[1], len1, argv[2][l], tabres, (lenres - 1 - c));
		c++;
	}
	print_array(tabres, lenres);
	free(tabres);
	exit(EXIT_SUCCESS);
	return (0);
}

