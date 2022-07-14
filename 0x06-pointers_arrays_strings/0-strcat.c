#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates 2 strings.
 * @dest: string 1
 * @src: string 2
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b, c, i;

	a = strlen(dest);
	b = strlen(src);
	for (c = a ; c < (a + b - 1); c++)
	{
		for (i = 0; i < b ; i++)
			dest[c] = src[i];
	}
	dest[c] = '\0';

	return (dest);
}
