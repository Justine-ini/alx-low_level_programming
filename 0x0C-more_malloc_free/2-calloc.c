#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL if nmemb or size is 0,
 * or if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		/* Use calloc to initialize the allocated memory to zero */
		memset(ptr, 0, nmemb * size);
	}

	return (ptr);
}
