#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - reverses
 *
 * @s: string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int n, a;

	n = strlen(s);
	for (a = n - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
