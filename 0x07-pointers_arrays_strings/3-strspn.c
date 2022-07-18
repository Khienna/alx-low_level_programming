#include <string.h>
#include "main.h"

/**
 * _strspn -  same as strspn
 * @s: string
 * @accept: from here
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
