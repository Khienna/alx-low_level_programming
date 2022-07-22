#include <string.h>
#include "main.h"

/**
 * _strpbrk -  same as strpbrk
 * @s: string
 * @accept: string 2
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);
	return (ret);
}
