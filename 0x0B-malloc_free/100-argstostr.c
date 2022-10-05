#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments
 * @ac: argument of the array
 * @av: pointer to the array of size
 *
 * Return: a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int l, m, len, size;
	char *argsto;

	len = 0;
	size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (l = 0; l < ac; l++)
	{
		m = 0;

		while (av[l][m])
		{
			m++;
			size++;
		}
		size++;
	}
	argsto = malloc((sizeof(char) * size) + 1);

	if (argsto == NULL)
		return (NULL);

	for (l = 0; l < ac; l++)
	{
		m = 0;

		while (av[l][m])
		{
			m++;
			len++;
		}
		argsto[len] = '\n';
		len++;
	}
	return (argsto);
}
