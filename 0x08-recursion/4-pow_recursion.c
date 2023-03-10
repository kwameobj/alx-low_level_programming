#include "main.h"

/**
 * _pow_recursion - a function that returns x raised to the power of y
 *
 * @x: the int value
 * @y: the int power
 *
 * Return: evaulated value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
