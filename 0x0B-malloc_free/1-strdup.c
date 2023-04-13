#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  function that returns a pointer to a newly allocated  memory
 * @str: input string
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int count;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc((sizeof(char) * i) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
		ptr[count] = str[count];
	}
	return (ptr);
}

