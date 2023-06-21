#include <stdlib.h>

/**
 * array_iterator -  a function that executes a function given as
 * a parameter on each element of an array.
 * @array: A pointer to array
 * @size: Size of the array
 * @action: action(function) to iterate throw array
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
