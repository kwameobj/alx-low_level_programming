#include <stdio.h>

/**
 * main - entry point
 * @argc: number of items on command line
 * @argv: array of characters on command line
 * Description: a function to print program name
 * Return: 0
*/

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
