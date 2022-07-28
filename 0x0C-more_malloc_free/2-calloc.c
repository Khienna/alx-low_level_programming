#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: no of members
 * @size: size
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *b;
	char *c;
	int d;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(size * nmemb);
	if (b == NULL)
		return (NULL);
	c = b;
	for (d = 0; d < (size * nmemb); d++)
		c[d] = '\0';

	return (b);
}
