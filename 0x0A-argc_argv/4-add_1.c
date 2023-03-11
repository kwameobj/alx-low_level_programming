#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of items on command line
 * @argv: array of items on the command line
 * Description: a program that adds positive numbers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int num = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", i);
	}

	else
	{
		if (argc > 1)
		{
			for (i = 1; i < argc; i++)
			{
				num = isdigit(argv[i]);
				if (num == 0)
				{
					printf("Error\n");
					return(1);
				}
				else
				{
					sum += atoi(argv[i]);
				}
			}
		}
		if(sum != 0)
		printf("%d\n", sum);
	}
	return (0);
}
