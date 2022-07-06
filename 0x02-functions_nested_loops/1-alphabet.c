#include "main.h"

/**
 * print_alphabet - function to print alphabets
 *
 * Return: 0
 */
void print_alphabet(void);
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
