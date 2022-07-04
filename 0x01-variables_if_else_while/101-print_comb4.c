#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int e;
	int f;

	for (d = 48 ; d < 58 ; d++)
	{
		for (e = 49 ; d < 58 ; e++)
		{
			for (f = 50 ; f < 58 ; f++)
			{
				if (f > e && e > d)
				{
				putchar(d);
				putchar(e);
				putchar(f);
				if (d != 55 || e != 56)
				{
					putchar(44);
					putchar(32);
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
