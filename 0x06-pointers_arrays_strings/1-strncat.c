#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of elements in src array
 * Description: a function that puts two strings together
 * using 'n' bytes to modify src
 * Return: 0
*/

char *_strncat(char *dest, char *src, int n);

{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
