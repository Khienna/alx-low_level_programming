#include "main.h"

/**
 * leet - encodes string into 1337.
 * @a: string to be encoded
 * Return: string
 */
char *leet(char *a)
{
	char b[5] = {'A', 'E', 'O', 'T', 'L'};
	char c[5] = {'4', '3', '0', '7', '1'};
	int d, e;

	d = 0;
	while (a[d])
	{
		for (e = 0; e < 5; e++)
		{
			if (a[d] == b[e] ||  a[d] - 32 ==  b[e])
				a[d] = c[e];
		}
		d++;
	}
	return (a);
}
