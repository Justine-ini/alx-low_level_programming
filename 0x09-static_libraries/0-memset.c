#include "main.h"

/**
 * _memset - fills memory with the constant byte b
 * @n: number of bytes to fill
 * @s: pointer to the memory area
 * @b: constant value
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int number = n;

	if (number > 0)
	{
		int i;

		for (i = 0; i < number; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
