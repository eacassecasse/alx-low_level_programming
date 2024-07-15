#include "main.h"

/**
 * _pow_recursion - Custom function
 * @x: The number to calculate its power AKA: Base
 * @y: The exponent of the power
 *
 * Description: Get the power of a number
 * Return: int | Power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
