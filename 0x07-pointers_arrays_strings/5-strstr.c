#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: string
 * @needle: string
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		h = haystack;
		n = needle;
		while (*n)
		{
			if (*h == *n)
			{
				h++;
				n++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
