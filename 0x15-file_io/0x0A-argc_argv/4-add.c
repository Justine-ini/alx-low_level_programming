#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argc: Argument counter
 * @argv: Argument
 * Return: 0 on success and 1 on Error
 */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int sum = 0;
	char *c;

	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c != '\0'; c++)
		{
			if (!isdigit(*c))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
