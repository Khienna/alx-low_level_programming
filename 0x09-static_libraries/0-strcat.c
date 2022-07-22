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
	int a, c;

	a = strlen(dest);
	for (c = 0; src[c] != '\0'; ++c, ++a)
	{
		dest[a] = src[c];
	}
	dest[a] = '\0';

	return (dest);
}
