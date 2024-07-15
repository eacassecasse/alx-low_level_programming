#include "main.h"

/**
 * factorial - Custom function
 * @n: The number to calculate its factorial
 *
 * Description: Get the factorial of a number
 * Return: int | Factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
