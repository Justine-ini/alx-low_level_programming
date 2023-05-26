#include "main.h"

#include "main.h"

/**
* factorial - find factorial of a given number
* @n: number
* Return: factorial of number, -1 if negative n
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
