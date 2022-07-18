#include <string.h>
#include "main.h"

/**
 * _strstr - works just like strstr
 * @haystack: string 1
 * @needle: string 2
 * Return: ret
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);
	return (ret);
}
