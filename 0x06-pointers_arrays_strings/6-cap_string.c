#include "main.h"
#include <string.h>

/**
 * cap_string - to capitalize
 * @str: string
 * Return: string
 */
char *cap_string(char *str)
{
	char s[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', 32, 9};
	int b;
	int a = 0;
	int c;
	int d;

	c = strlen(str);
	while (a < c)
	{
		d = a + 1;
		if (str[a] == s[b] && (str[d] >= 97 && str[d] <= 122))
		{
			str[d] = str[d] - 32;
			b++;
		}
		a++;
	}
	return (str);
}
