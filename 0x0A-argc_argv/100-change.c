#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make change
 * @argv: argument
 * @argc: argument counter
 * Return: return 0 on success and 1 on Error
 */

int main(int argc, char *argv[])
{
	int cents;
	int num_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", num_coins);
	return (0);
}
