#include <stdio.h>

/**
 * main - entry point
 * @agrc: number of items on command line
 * @agrv: array of characters on command line
 * Description: a function that prints the number of arguments passed into it
 * Return: 0
 */

int main(int agrc, __attribute__((unused))char *agrv[])
{
	printf("%d\n", agrc);
	return (0);
}
