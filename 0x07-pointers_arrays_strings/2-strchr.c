#include "main.h"
#include <string.h>

/**
 * _strchr - acts same way as strchr
 * @s: string
 * @c: character
 * Return: c or null.
 */
char *_strchr(char *s, char c)
{
	char a;

	a = strchr(s, c);
	return (a);
}
