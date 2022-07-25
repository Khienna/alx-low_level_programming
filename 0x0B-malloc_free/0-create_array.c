#include "main.h"
#include <stdlib.h>

/**
 * create_array - ccreates array
 * @size: size of array
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
	{
		return (0);
	}
	ar =  malloc(size * sizeof(char));
	if (ar == 0)
	{
		return (0);
	}
	while (size--)
	{
		ar[size] = c;
	}

	return (ar);
	free(ar);
}
