#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print sums of diagonals in matrix
* @a: matrix
* @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum_1 = 0;
	int sum_2 = 0;

	for (i = 0; i < size; i++)
	{

		j = (i * size) + i;
		sum_1 += a[j];
	}
	for (i = 1; i <= size; i++)
	{
		j = (i * size) - i;
		sum_2 += a[j];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
