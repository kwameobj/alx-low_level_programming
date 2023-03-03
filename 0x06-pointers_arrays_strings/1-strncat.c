#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of elements in src array
 * Description: a function that puts two strings together
 * using 'n' bytes to modify src
 * Return: 0
*/

char *_strncat(char *dest, char *src, int n);

{

    int j;
    j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
