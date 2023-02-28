#include "main.h"

/**
 * print_line - prints a line
 * @n: input parameter
 *
 */

void print_line(int n)
{
	char k;

	for (k = 0; k < n; k++)
		_putchar('_');
	_putchar('\n');
}
