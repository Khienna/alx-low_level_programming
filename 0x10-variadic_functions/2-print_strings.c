#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - strings
 * @separator: separator
 * @n: count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list b;
	char *d;

	va_start(b, n);

	for (a = 0; a < n; a++)
	{
		d = va_arg(b, char*);
		if (d == NULL)
			printf("(nil)");
		else
			printf("%s", d);
		if (separator != NULL && a != n - 1)
			printf("%s", separator);
	}
	va_end(b);

	printf("\n");
}
