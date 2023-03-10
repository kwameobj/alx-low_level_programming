#include <stdio.h>
#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: memory area where byte is stored
 * @src: memory area where it is copied
 * @n: bytes
 *
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (n > 0)
	{
		dest[i] = src[j];
		n--;
		j++;
		i++;

	}
	return (dest);
}
