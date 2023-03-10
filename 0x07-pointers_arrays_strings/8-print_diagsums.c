#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 *
 * @a: multidimensional array
 * @size: size of multidimensional array
 *
 * Return:  nothing(void)
 */
void print_diagsums(int *a, int size)
{
	int i, counter1 = 0, counter2 = 0;

	for (i = 0; i < size; i++)
	{
		counter1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		counter2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", counter1, counter2);
}
