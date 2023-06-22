#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints a variable number of integers
 * separated by a given separator
 * @separator: The string used to separate the
 * numbers (or an empty string if NULL)
 * @n: The number of integers to be printed
 * @...: The list of integers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg_list;

	va_start(arg_list, n);

	if (separator == NULL)
	{
		separator = "";
	}

	while (i < n)
	{
		printf("%d", va_arg(arg_list, int));

		if (i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
}
