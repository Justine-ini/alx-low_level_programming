#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to search through
 * @accept: matches targeted
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int matches = 0;

	unsigned int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		unsigned int j = 0;

		while (accept[j] != '\0' && s[i] != accept[j])
			++j;
		if (accept[j] == '\0')
			return (matches);

		++matches;
	}

	return (matches);
}
