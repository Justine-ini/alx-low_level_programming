#include "main.h"

/**
 * findSquareRoot - recursively finds the square root of a number
 * @n: number to find the square root of
 * @guess: current guess for the square root
 * Return: square root of the number
 */
int findSquareRoot(int n, int guess)
{
	if ((guess * guess) > n)
	{
		return (-1);
	}
	if ((guess * guess) == n)
	{
		return (guess);
	}
	return (findSquareRoot(n, guess + 1));
}
/**
 * _sqrt_recursion - recursively finds the
 * natural square root of a number
 * @n: number to find the square root of
 * Return: square root of the number, or -1 if the number is negative
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (findSquareRoot(n, 0));
}
