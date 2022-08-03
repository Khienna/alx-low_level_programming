#include "function_pointers.h"

/**
 * int_index - int
 * @array: array
 * @size: size
 * @cmp: compare
 * Return: different ints
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}

	return (-1);
}
