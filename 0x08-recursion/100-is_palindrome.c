#include "main.h"

/**
 * _strlen - a function that finds the length of a string
 *
 * @s: string
 *
 * Return: length
 **/

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(s + 1) + 1);
}

/**
 * palind_recursive - a function that checks if two chars
 * of a string are equal
 *
 * @s: string
 *
 * @i: first
 *
 * @j: last
 *
 * Return: 1 if equal  0 otherwise
 **/

int palind_recursive(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == j - 1)
		return (s[i] == s[j]);
	if (s[i] != s[j])
		return (0);
	return (palind_recursive(s, i + 1, j - 1));
}

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not.
 *
 * @s: string
 *
 * Return: 1 if string is palindrome 0 if not
 **/

int is_palindrome(char *s)
{
	int k;

	k = _strlen(s);
	if (k == 0 || *s != s[k - 1])
		return (0);
	return (palind_recursive(s, 0, k - 1));
}
