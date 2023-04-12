#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * @size: input size of array
 * @c: input character
 * Return: 0 on success and NULL when it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}
	if (size >= 1)
	{
		ptr = malloc(size * sizeof(char));
		for (count = 0; count < size; count++)
		{
			ptr[count] = c;
		}
	}
	return (ptr);
}
