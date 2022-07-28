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
	int *b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(size * nmemb);
	if (b == NULL)
		return (NULL);
	return (b);
}
