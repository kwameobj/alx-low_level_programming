#include <stdio.h>
#include "main.h"

/**
 * print_binary: prints the binary representation of a given number
 * @n: the given number
 *
 * Return: 0
 */

void print_binary(unsigned long int n);
{
	int i, j;

	if (n == 0)
		_putchar('0');

	for (j = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			j = 1;
		if (j == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
