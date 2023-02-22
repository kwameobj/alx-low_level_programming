#include "main.h"

/**
* _isalpha - outputs 1 if a character is letter of the alphabets 0 if it is not
* @c: the character
* Description: checks for letter of the alphabets
* Return: 1 for any letter og the alphabet 0 for the rest
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
