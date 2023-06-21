#include "function_pointers.h"

/**
 * int_index - finds the index of an integer in an array
 * @array: input array
 * @size: size of the array
 * @cmp: comparison function
 *
 * Return: index of the integer in cmp, or -1 if not found or invalid inputs
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
