#include "main.h"
#define NULL 0

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @accept: targeted matches
 * @s: Searched string
 * Return: pointer in bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	int n;

	while (s[i] != '\0')
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
