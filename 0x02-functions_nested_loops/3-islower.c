#include "main.h"

/**
* _islower - outputs 1 a character is lowercase 0 if it is not
* @c: the character
* Description: checks for lowercase character
* Return: 1 for lowercase. 0 for the rest
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
