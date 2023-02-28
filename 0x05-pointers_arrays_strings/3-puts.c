#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the given string
 *
 * Description: a function that prints a string to stdout
 * followed by a new line
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
		_putchar(*str++);
	
	_putchar('\n');
}
