#include "main.h"

/**
 * _strncpy - copys fixed length string
 * @dest: a given string
 * @src: a given string
 * @n: number of places
 * Description: a function that copies a string
 * Return: Dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
