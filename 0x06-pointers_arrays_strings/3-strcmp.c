#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: given string
 * @s2: given string
 * Description - a function that compares two strings
 * Return: string differences
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
