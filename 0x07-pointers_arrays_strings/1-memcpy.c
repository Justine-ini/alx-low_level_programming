#include "main.h"

/**
 * _memcpy - Copies bytes from memory area source to memory area destination
 * @n: number of bytes
 * @src: Source
 * @dest: Destination
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int number = n;

	if (number > 0)
	{
		int i;

		for (i = 0; i < number; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
