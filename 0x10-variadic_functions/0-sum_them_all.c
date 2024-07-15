#include "variadic_functions.h"

/**
 * sum_them_all - Custom function
 * @n: Amount of arguments passed to the function
 *
 * Description: Computes the sum of all arguments received
 * Return: Sum of all arguments or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
