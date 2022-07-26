#include "main.h"
#include <stdlib.h>

/**
 * _strdup - acts like strdup
 * @str: string
 * Return: pointer to new space
 */
char *_strdup(char *str)
{
	char *b;
	int i, a;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}

	if (str == 0)
		return (0);
	if (str == NULL)
		return (NULL);

	b = (char *)malloc(sizeof(char) * (i + 1));

	if (b == 0)
	{
		return (0);
	}
	for (a = 0; a <= i; a++)
		b[a] = str[a];
	return (b);
	free(b);
}
