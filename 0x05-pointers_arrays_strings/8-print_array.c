#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints an array
 * @a: array
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c == n - 1)
			printf("%d", a[c]);
		else
			printf("%d, ", a[c]);
	}
	printf("\n");
}
