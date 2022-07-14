#include "main.h"
#include <string.h>

/**
 * string_toupper - changes lowercase to upper
 * @str: string
 * Return:  nothing
 */
char *string_toupper(char *str)
{
	int n;
	int b = 0;

	n = strlen(str);
	while (b < n)
	{
		if (str[b] >= 97 && str[b] <= 122)
			str[b] = str[b] - 32;
		b++;
	}
	return (0);
}
