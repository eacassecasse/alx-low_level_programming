#include "main.h"

/**
 * count_dividers - Custom function
 * @n: The number to count its dividers
 * @div: The divisor to check
 *
 * Description: Count the dividers of the given number which are < number
 * Return: int | The amount of dividers
 */
int count_dividers(int n, int div)
{
	if (div > n)
		return (0);

	if (n % div == 0)
		return (1 + count_dividers(n, div + 1));
	else
		return (count_dividers(n, div + 1));
}


/**
 * is_prime_number - Custom function
 * @n: The number tp be verified
 *
 * Description: Verifies if the given number is prime or not
 * Return: int | 1 if the number is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	int dividers;

	dividers = count_dividers(n, 1);

	if (dividers == 2)
		return (1);
	else
		return (0);
}
