#include "main.h"
#define NULL 0

/**
 * _strstr - function that locates a substring.
 * @haystack: searched string
 * @needle: target string
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack, *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

