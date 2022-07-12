#include "main.h"
#include <string.h>

/**
 * puts_half - puts half of string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int a, b, c;

	a = strlen(str);
	if (a % 2 == 0)
		b = a / 2;
	else
		b = a / 2 + 1;
	for (c = b ; c < a ; c++)
		_putchar(str[c]);
	_putchar('\n');
}
