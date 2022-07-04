#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48 ; n <= 57 ; n++)
		putchar(n);

	for (ch = 'a' ; ch < 'g' ; ch++)
		putchar(ch);

putchar('\n');
	return (0);
}
