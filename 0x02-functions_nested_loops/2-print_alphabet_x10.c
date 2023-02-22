#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times.
* Description: prints the alphabets ten times then a new line.
* Return: void
*/

void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 97; a <= 122; a++)
		{
		_putchar(a);
		}
	_putchar('\n');
	}
}
