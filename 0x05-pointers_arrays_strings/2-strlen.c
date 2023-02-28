#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * Description: a function that returns the length of a string.
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
