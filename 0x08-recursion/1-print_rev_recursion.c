#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer block of memory to fill
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	/*If Statement*/
	if (*s == '\0')
		return;
	s++;

	_print_rev_recursion(s);
	s--;

	_putchar(*s);
}
