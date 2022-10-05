#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a new string
 * @str: An input pointer of the string to copy.
 *
 * Return: a pointer to a new string or NULL if it str is NULL
 */

char *_strdup(char *str)
{
	char *n_str;
	int l = 0;
	int len = 0;

	/*Check if str is null*/
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	n_str = malloc(sizeof(char) * (len + 1));

	/*To check if malloc was sucessful*/
	if (n_str == NULL)
	{
		return (NULL);
	}

	for (l = 0; l < len; l++)
	{
		n_str[l] = str[l];
	}
	n_str[len] = '\0';
	return (n_str);
}
