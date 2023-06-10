#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the minimum number of coins for an amount of money.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 * argv[0] should be the program name and argv[1] should
 * be the amount of money.
 * Return: 0 on success, 1 if the amount is not given or
 * there are too many arguments,
 * or prints "0" if the amount is negative.
 */
int main(int argc, char *argv[])
{
	int n, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	coins = calculateCoins(n);
	printf("%d\n", coins);
	return (0);
}

/**
 * calculateCoins - Calculates the minimum number of
 * coins for a given amount.
 * @n: The amount of money.
 * Return: The minimum number of coins needed
 * or prints "0" if the amount is negative.
 */
int calculateCoins(int n)
{
	int coins = 0;

	if (n < 0)
	{
		printf("0\n");
		return (coins);
	}

	coins += n / 25;
	n = n % 25;
	coins += n / 10;
	n = n % 10;
	coins += n / 5;
	n = n % 5;
	coins += n / 2;
	n = n % 2;
	coins += n / 1;

	return (coins);
}
