#include "main.h"

/**
* print_diagonal - draws a diagonal line
* @n: input placeholder
*/
void print_diagonal(int n)
{
	int k, l;

	if (n <= 0)
		_putchar('\n');
	for (k = 0; k < n; k++)
	{
		for (l = 0; l <= k; l++)
		{
			if (k == l)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
