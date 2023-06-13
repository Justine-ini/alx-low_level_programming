#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size_s1 = 0, size_s2 = 0;
	char *ptr, *result;

	ptr = s1;
	if (s1)
		while (*ptr++)
			size_s1++;
	else
		s1 = "";
	ptr = s2;
	if (s2)
		while (*ptr++)
			size_s2++;
	else
		s2 = "";
	result = malloc(size_s1 + size_s2 + 1);
	if (!result)
		return (NULL);
	ptr = result;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (result);
}
