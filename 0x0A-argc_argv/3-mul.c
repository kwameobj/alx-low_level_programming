#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of items on command line
 * @argv: array of characters on command line
 * Description - a program that multiplies two numbers.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int prod = i * j;

	if (argc != 3)
	{
		printf("Error\n");
                return (1);
	}
	printf("%d\n", prod);
	return (0);
}
