#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(a, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(a);
	printf("\n");
}
