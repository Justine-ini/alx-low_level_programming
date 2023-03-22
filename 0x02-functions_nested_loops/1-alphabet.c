#include "main.h"

/**
 * print _alphabet - prints alphabet in lowercase
 * Description: This will print lowercase alphabet
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
