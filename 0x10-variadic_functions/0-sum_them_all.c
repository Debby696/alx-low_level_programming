#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that prints the sum of all its parameters.
 * @n:the number of parameters passed to the function
 * @...: variable no of parameters to calculate the sum of
 * otherwise the sum of all parameters
 * Return: if n == 0 -0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

