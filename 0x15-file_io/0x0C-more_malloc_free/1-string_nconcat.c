#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings up to n characters of s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters of s2 to concatenate
 *
 * Return: A pointer to the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
		while (s1[i])
			i++;

	if (s2 == NULL)
		j = 0;
	else
		while (s2[j])
			j++;

	if (j > n)
		j = n;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	for (k = 0; k < j; k++)
		s[k + i] = s2[k];

	s[i + j] = '\0';

	return (s);
}
