#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size in bytes of the allocated space for ptr
 * @new_size: New size in bytes of the new memory block
 *
 * Return: Pointer to the newly allocated memory block, or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr;
	unsigned int i = 0, max =  new_size;
	char *oldPtr = ptr;

	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		return (newPtr);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
	{
		return (ptr);
	}

	newPtr = malloc(new_size);
	if (newPtr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		max = old_size;
	}

	while (i < max)
	{
		newPtr[i] = oldPtr[i];
		i++;
	}
	free(ptr);
	return (newPtr);
}
