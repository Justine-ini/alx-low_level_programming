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
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
