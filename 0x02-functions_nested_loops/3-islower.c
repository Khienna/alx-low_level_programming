#include "main.h"

/**
 * _islower - a lowercase alphabet
 * @c: int we will use as function argument
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
