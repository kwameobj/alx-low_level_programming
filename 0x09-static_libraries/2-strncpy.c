#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: string argument
 * @src: string argument
 * @n: integer argument
 *
 * Return: string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for ( ; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
