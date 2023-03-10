#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @c: input
 *
 * Return: absolute value
 *
 */

int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}

