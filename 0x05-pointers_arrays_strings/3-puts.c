#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to a string to print
 *
 * Description: a function that prints a string to the stdout
 * followed by a new line
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
