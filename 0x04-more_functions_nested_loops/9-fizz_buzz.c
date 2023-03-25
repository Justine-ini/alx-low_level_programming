#include <stdio.h>
/**
 * main - fizz-buzz test
 * Return: 0
 */
int main(void)
{
	int m;

	m = 1;
	printf("%d", m);

	for (m = 2; m <= 100; m++)
	{
		if ((m % 3 == 0) && (m % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (m % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (m % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", m);
		}
	}
	printf("\n");
	return (0);
}
