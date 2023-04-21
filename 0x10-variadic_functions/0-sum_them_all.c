#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of argument passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If neutral
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vr;
	unsigned int i, sum = 0;

	va_start(vr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vr, int);

	va_end(vr);

	return (sum);
}
