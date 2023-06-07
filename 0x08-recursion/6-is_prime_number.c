#include "main.h"

int is_prime(int n, int i);

/**
 * is_prime_number - determines if an integer is prime or not
 * @n: number to check
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
/**
 * is_prime - checks if a number is prime recursively
 * @n: number to check to check
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */
int is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if ((n % i) == 0 && i > 0)
	{
		return (0);
	}
	return (is_prime(n, i - 1));
}
