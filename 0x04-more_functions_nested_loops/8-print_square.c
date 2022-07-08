#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 * Return: nothing
 */
void print_square(int size)
{
	int a, b;

	for (a = 0 ; a < size ; a++)
	{
		for (b = 0 ; b < size ; b++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
