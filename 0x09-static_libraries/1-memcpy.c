#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: to be copied to
 * @src: copied from
 * @n: amount of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
