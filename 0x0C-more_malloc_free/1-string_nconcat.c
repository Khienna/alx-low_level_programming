#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a;
	int b, c;
	char *s;

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

	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	if (n < b)
		b = n;
	for (c = 0; c < (a + b) ; c++)
	{
		if (c < a)
			s[c] = s1[c];
		if (c >= a)
		{
			s[c] = s2[c - a];
		}
	}
	s[c] = '\0';
	return (s);
}
