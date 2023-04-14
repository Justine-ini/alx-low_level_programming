#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes them to zero
 * @nmemb: The number of elements in the array
 * @size: The size of each element
 * Return: On success, a pointer to the allocated memory. On failure, NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	/* If either nmemb or size is zero, return NULL */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* Allocate memory for nmemb elements of size bytes each */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);  /* If allocation failed, return NULL */
	}
	/* Initialize all elements to zero */
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
