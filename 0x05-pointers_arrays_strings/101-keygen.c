#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random passwords for 101-crackme program
 * Return: 0
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
