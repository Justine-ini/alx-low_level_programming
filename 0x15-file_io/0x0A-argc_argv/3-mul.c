#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that multiplies two numbers
* @argc: argument counter
* @argv: numbers to multiply
* Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
	int num_1, num_2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);
	printf("%d\n", num_1 * num_2);

	return (0);
}


