#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line
 * @argc: counts argument
 * @argv: Arguments given
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (i < argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
