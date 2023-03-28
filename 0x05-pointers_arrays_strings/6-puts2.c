#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int a = 0;
	int b = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		a++;
	}
	b = a - 1;
	for (o = 0; o <= b; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
