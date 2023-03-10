#include "main.h"

/**
 * _isupper -a function that checks for uppercase character
 *
 * @c: input parameter
 *
 * Return: 1 if uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
