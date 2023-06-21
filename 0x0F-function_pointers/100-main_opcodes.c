#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of parameters.
 * @argv: the parameters in the case the number ob bytes.
 *
 * Description: This program prints opcodes in hexa.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;
	while (i < n)
	{
		printf("%02hhx", *((char *)main + i));

		if (i < n - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
		i++;
	}
	return (0);
}
