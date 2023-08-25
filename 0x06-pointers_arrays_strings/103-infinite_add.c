#include "main.h"


/**
 * infinite_add - Custom function
 * @n1: pointer to the first number to add
 * @n2: pointer to the second number to add
 * @r: pointer to the result of the addition
 * @size_r: size of the result buffer
 *
 * Description: Sum 2 numbers
 * Return: The result buffer or 0 if the result cannot be stored in the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, of = 0, k, num1, num2, sum;
	char temp;

	for (i = 0; n1[i] != '\0';)
		i++;
	for (j = 0; n2[j] != '\0';)
		j++;
	i--, j--;
	for (k = 0; i >= 0 || j >= 0 || of == 1; i--, j--, k++)
	{
		(i < 0) ? (num1 = 0) : (num1 = n1[i] - '0');
		(j < 0) ? (num2 = 0) : (num2 = n2[j] - '0');

		sum = num1 + num2 + of;
		
		(sum > 9) ? (of = 1) : (of = 0);

		if (k >= size_r - 1)
			return (0);
		r[k] = (sum % 10) + '0';
	}
	if (k == size_r)
		return (0);
	r[k] = '\0';
	for (i = 0; i < k / 2; i++)
	{
		temp = r[i];
		r[i] = r[k - 1 - i];
		r[k - 1 - i] = temp;
	}
	return (r);
}
