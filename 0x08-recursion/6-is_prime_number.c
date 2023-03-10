#include "main.h"

/**
 * prime - a function that returns 1 if input integer is a prime
 * otherwise return 0.
 *
 * @n: integer number
 *
 * @div: number dividing
 *
 * Return: 1 if the input integer is a prime number
 * 0 otherwise
 */

int prime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (prime(n, div + 1));

}

/**
 * is_prime_number - a function that checks for prime number
 *
 * @n: integer number
 *
 * Return: 1 if the input integer is a prime number
 * 0 otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (prime(n, div));
}
