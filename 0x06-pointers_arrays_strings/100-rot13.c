#include "main.h"

/**
 * rot13 -  to encode string
 * @a: string
 * Return: a
 */
char *rot13(char *a)
{
	int b, c;
	char d[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e',
		'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char key[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	       'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
	       'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
	       'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
	       'h', 'i', 'j', 'k', 'l', 'm'};

	b = 0;

	while (a[b])
	{
		for (c = 0; c < 52; c++)
		{
			if (a[b] == d[c])
				a[b] = key[c];
		}
		b++;
	}
	return (a);
}
