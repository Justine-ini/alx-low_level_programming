#include "main.h"
#include <stdlib.h>

/**
 *array_range - function that creates an array of integers
 * @min: the minimum value of the range
 * @max:the maximum value of the range
 * Return: a pointer to the array of integers
 */
#include "main.h"
#include <stdlib.h>

/**
 * array_range - Main Entry
 * @min: input
 * @max: input
 * Return: 0
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
