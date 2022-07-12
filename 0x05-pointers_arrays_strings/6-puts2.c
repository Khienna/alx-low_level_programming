#include "main.h"
#include <string.h>

/**
 * puts2- puts even arrays
 * @str: array
 * Return: void
 */
void puts2(char *str)
{
	int a, b;

	a = strlen(str);
	for (b = 0 ; b <= a - 1 ; b++)
	{
		if (b % 2 == 0)
			_putchar(str[b]);
	}

	_putchar('\n');
}
