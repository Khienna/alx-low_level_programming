#include "main.h"
#include <string.h>
/**
 * rev_string - reverses string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int n, o;

	n = strlen(s);
	for (o = n - 1; o >= 0; o--)
	{
		s = _putchar(s[o]);
	}
}
