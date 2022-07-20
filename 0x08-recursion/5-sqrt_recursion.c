#include "main.h"

/**
 * _sqrt_recursion - square root
 * @n: integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - gives sqaureroot
 * @n: integer
 * @i: number
 * Return: int
 */
int _sqrt(int n, int i)
{
	int b;

	b = i * i;

	if (n < b)
		return (-1);
	if (n == b)
		return (i);
	return (_sqrt(n, i + 1));
}
