#include "main.h"

/**
 * is_prime_number - prime number
 * @n: integer
 * Return: int
 */
int is_prime_number(int n)
{
	return (primes(n, 1));
}

/**
 * primes - primes
 * @n: integer
 * @i: number
 * Return: int
 */
int primes(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (primes(n, i + 1));
}
