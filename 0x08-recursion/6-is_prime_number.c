#include "main.h"
int actual_prime(int n, int i);

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number
 * otherwise, return 0
 * @n: number to evaluate
 *
 * Return: return 1 or 0
 */

int is_prime_number(int n)
{
	return (actual_prime(n, 1));
}

/**
 * actual_prime - checks prime numbers
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 or 0
 */

int actual_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);
	return (actual_prime(n, i + 1));
}
