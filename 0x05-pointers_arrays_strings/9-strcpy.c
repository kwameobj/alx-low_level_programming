#include "main.h"

/**
 * *_strcpy -  copies the given string
 * @dest: char type string
 * @src: char type string
 * 
 * Description: a function that copies a given string
 * including the terminating null byte (\0) to the buffer
 * Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
