#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Description: a dunction that puts two strings together
 * eliminating the \0
 * Return: 0
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
