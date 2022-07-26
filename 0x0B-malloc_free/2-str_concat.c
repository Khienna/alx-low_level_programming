#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *d;
	int a;
	int b;
	int c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	d = malloc((a + b + 1) * sizeof(char));
	if (d == 0)
		return (0);
	for (c = 0; c <= a + b; c++)
	{
		if (c < a)
			d[c] = s1[c];
		else
			d[c] = s2[c - a];
	}
	d[c] = '\0';
	return (d);
}
