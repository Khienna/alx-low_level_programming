#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
		return (0);
for (i = 0; i < n; i++)
	sum += va_arg(ap, unsigned int);
va_end(ap);
return (sum);
}
