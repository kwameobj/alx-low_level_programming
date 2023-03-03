#include "main.h"

/**
 * cap_string - capitalizes words of a given string
 * @s: string to manipulate
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	i++;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z')
		    && (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
			|| s[i - 1] == '\n'))
			s[i] = s[i] - 'a' + 'A';
		i++;
	}

	return (s);
}
