#include "main.h"

/**
 * _abs - computes the absolute value of the integer argument
 * @n: n is an integer
 * Description: prints the absolute value of an integer
 * Return: -n if n<0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
