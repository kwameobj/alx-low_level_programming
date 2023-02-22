#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: i is a number
 * Description: function that prints the last digit of a number
 * Return: lastDig
 */

int print_last_digit(int i)
{
	int lastDig = i % 10;

	if (i < 0)
	{
		lastDig = lastDig * -1;
	}

_putchar(lastDig + '0');
return (lastDig);
}
