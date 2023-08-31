#include "main.h"

/**
 * _sqrt - Custom function
 * @n: The number to get its square root
 * @it: The iterator to search the actual sqrt
 *
 * Description: Evaluates the square root
 * Return: int | The square of the number
 */
int _sqrt(int n, int it)
{
	if (it * it > n)
		return (-1);

	if (it * it == n)
		return (it);

	return (_sqrt(n, it + 1));
}


/**
 * _sqrt_recursion - Custom function
 * @n: The number to get its square root
 *
 * Description: Gets the square root of a number recursively
 * Return: int | The SQRT
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 0));
}
