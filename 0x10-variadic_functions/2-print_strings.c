#include "variadic_functions.h"

/**
 * print_strings - Custom function
 * @separator: Token that will be separating the strings
 * @n: Amount of args passed to the function
 *
 * Description: Prints a list of strings separated by the @separator
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (!s)
			s = "(nil)";

		if (!separator || (separator && i == 0))
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}

	va_end(args);

	printf("\n");
}
