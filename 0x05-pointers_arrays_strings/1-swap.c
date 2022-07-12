#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps two integers
 * @a: to be swapped with b
 * @b: to be swapped with a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
