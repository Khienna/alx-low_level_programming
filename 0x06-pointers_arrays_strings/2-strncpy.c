#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src: string 2
 * @n: int n
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (0);
}
