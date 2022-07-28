#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory
 * @nmemb: no of members
 * @size: size
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *b;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(size * nmemb);
	if (b == NULL)
		return (NULL);
	filler = b;
	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';
	return (b);
}
