#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: string arguments
 * @src: string arguments
 * @n: integer arguments
 *
 * Return: pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < n && src[i] ; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
