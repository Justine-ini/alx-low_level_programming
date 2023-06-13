#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates command-line arguments into a single string
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			length++;
			j++;
		}
		i++;
	}
	length += ac;

	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		if (str[k] == '\0')
			str[k++] = '\n';
		i++;
	}
	return (str);
}
