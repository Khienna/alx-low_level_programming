#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - acts like strdup
 * @str: string
 * Return: pointer to new space
 */
char *_strdup(char *str)
{
	char *b;
	int i;

	i = strlen(str);
	if (str == 0)
		return (0);

	b = malloc(sizeof(char) * i);
	if (b == 0)
		return (0);
	strdup(b);
	return (b);
	free(b);
}
