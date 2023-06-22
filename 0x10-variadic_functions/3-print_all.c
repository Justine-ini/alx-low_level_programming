#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints a formatted list of arguments.
 * @format: A string containing the format specifiers.
 *           Each specifier corresponds to an argument.
 *           Specifiers: 'c' for char, 'i' for int, 'f' for float,
 *           's' for string.
 *           Any other character will be ignored.
 *
 * Description: This function takes a variable number of arguments
 *              based on the provided format string and prints them
 *              according to their corresponding specifiers.
 *              The printed arguments are separated by commas.
 *              If a string argument is NULL, "(nil)" is printed instead.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int hasError;
	char *str;
	va_list argsList;

	va_start(argsList, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argsList, int));
				hasError = 0;
				break;
			case 'i':
				printf("%i", va_arg(argsList, int));
				hasError = 0;
				break;
			case 'f':
				printf("%f", va_arg(argsList, double));
				hasError = 0;
				break;
			case 's':
				str = va_arg(argsList, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				hasError = 0;
				break;
			default:
				hasError = 1;
				break;
		}
		if (format[i + 1] != '\0' && hasError == 0)
			printf(", ");
		i++;
	}
	printf("\n");
}
