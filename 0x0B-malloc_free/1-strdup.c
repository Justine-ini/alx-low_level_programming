#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicates a string.
 * @str: The original string.
 *
 * Return: Pointer to the duplicated string, or NULL if unsuccessful.
 */
char *_strdup(char *str)
{
	char *new_string;
	unsigned int length, i;

	/* Check if str is null */
	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	new_string = (char *)malloc((length + 1) * sizeof(char));

	/* Check if malloc was successful */
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		new_string[i] = str[i];
	}
	new_string[length] = '\0';
	return (new_string);
}
