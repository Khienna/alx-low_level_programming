#include "function_pointers.h"

/**
 * array_iterator - iterates array
 * @array: array
 * @size: size
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
