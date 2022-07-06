#include "main.h"

/**
 * _islower - a lowercase alphabet
 *
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
