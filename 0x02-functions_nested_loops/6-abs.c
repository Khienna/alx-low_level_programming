#include "main.h"

/**
 * _abs - returns absolute value of an integer.
 * @a: function argument
 * Return: 0
 */
int _abs(int a)
{
	if (a > 0 || a == 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
