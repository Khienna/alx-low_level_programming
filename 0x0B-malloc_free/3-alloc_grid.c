#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2d arrays
 * @width: width
 * @height: height
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int b;
	int c;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(sizeof(int) * width);

		if (a[b] == NULL)
		{
			for (; b >= 0; b--)
				free(a[b]);
			free(a);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			a[b][c] = 0;
		}
	}
	return (a);
}
