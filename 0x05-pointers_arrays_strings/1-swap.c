#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: A function that swaps the values of two integers
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;
		*a = *b;
		*b = i;
}
