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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
