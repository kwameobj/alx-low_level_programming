#include "main.h"

/**
 * _strlen -finds the length of a string
 *
 * @s: argument
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
