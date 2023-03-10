#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: input string
 * @c: input character
 *
 * Return: pointer to the first occurrence of the character c or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	    {
		    i++;
	    }

	if (s[i] == c)
	    {
			return (&s[i]);
		}
	return (00);
}
