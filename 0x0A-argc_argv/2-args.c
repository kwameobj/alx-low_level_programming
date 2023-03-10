#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of items on command line
 * @argv: array of characters on command line
 * Description - a program that prints all arguments it receives
 * Return: 0
 */

int main(int argc, char **argv)
{
	while(argc--)
		printf("%s\n", *argv++);

	return (0);
}
