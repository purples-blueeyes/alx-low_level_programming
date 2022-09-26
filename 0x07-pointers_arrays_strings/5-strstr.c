#include "main.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 *
 * Return: 0 (Always)
 */

char *_strstr(char *haystack, char *needle)
{
	char *str5, *str6; /*Declaring variables*/

	while (*haystack != '\0')
	{
		str5 = haystack; /*values*/
		str6 = needle;

		while (*haystack != '\0' && *str6 != '\0' && *haystack == *str6)
		{
			haystack++;
			str6++;
		}

		if (*str6 == '\0')
			return (str5);
		haystack = str5 + 1;
	}

	return (0);
}
