#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array - reverses array
 * @a: array
 * @n: no of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;

	for (b = n; b >= 0; b--)
	{
		printf("%d", a[b]);
	}
}
