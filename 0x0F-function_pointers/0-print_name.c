#include "function_pointers.h"

/**
 * print_name - Prints a given name
 * @name: given name
 * @f: function to print with
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
