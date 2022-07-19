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
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return ('\0');
}
