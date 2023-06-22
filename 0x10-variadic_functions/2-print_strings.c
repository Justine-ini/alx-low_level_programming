#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - Prints a variable number of strings.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings to be printed.
 * @...: Variable arguments containing the strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i = 0;
	va_list arg_list;

	va_start(arg_list, n);

	/* Check if separator is NULL */
	if (separator == NULL)
		separator = "";

	/* Iterate through the strings and print them */
	while (i < n)
	{
		str = va_arg(arg_list, char *);
		/* Check if the string is NULL */
		if (str == NULL)
		{
			str = "(nil)";
		}

		printf("%s", str);

		/* Print separator after the string if not the last string */
		if (i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");

	va_end(arg_list);
}
