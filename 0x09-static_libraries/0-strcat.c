#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: string arguments
 * @src: string arguments
 *
 * Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, slength = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[slength] != '\0')
	{
		dest[length] = src[slength];
		length++;
		slength++;
	}
	dest[length] = '\0';
	return (dest);
}
