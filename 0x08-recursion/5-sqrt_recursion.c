#include "main.h"

/**
 * root - a function that finds square root of n
 *
 * @n: integer
 *
 * @i: integer
 *
 * Return: natural square root, or -1
 */

int root(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (root(n, i + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural square root
 *
 * @n: int number
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (root(n, 0));
}
