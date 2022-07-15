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
	int b = 0;
	int a = 0;
	int c;
	int d;

	c = strlen(str);
	while (a < c)
	{
		d = a - 1;
		if ((a == 0 || str[d] == s[b]) && (str[a] >= 97 && str[a] <= 122))
		{
			str[a] = str[a] - 32;
			b++;
		}
		a++;
	}
	return (str);
}
