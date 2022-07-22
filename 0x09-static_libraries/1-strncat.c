#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates 2 strings
 * @dest: string 1
 * @src: string 2
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
