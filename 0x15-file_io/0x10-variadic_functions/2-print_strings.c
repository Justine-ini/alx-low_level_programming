#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string separator
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int j;
	va_list list;
	char *str;

	va_start(list, n);
	for (j = 0; j < n; j++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && !j)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(list);

}
