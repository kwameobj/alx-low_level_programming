#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of another string
 * @str: given string array
 * Return: new string
*/

char *_strdup(char *str)
{
	char *dupli_str;
	int i;
	int j = 0;

	dupli_str = malloc(sizeof(char) * j + 1);

	if (str == NULL || dupli_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dupli_str[i] = str[i];

	dupli_str[j] = '\0';

	return (dupli_str);
}
