#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void *_calloc(unsigned int nmemb, unsigned int size);
int _strlen(char *s);
int _atoi(char *s);
int _isNumber(char *str);
void _error(const char *str);
int mul(int *res, int len, int pos, int num1, int num2);
int _putchar(char c);


/**
 * main - Entry Point
 * @argc: Arguments counter
 * @argv: List of supplied arguments
 *
 * Description: Multiplies 2 positive numbers
 * Return: 0 - Always success
 */

int main(int argc, char **argv)
{
	char *s1, *s2;
	int s1_len, s2_len, i, r_len, *res, pd = 0;

	s1 = argv[1];
	s2 = argv[2];

	if (argc != 3 || !_isNumber(s1) || !_isNumber(s2))
		_error("Error");

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	r_len = s1_len + s2_len + 1;

	res = _calloc(r_len, sizeof(int));

	if (!res)
		_error("Error");

	for (s1_len = _strlen(s1) - 1; s1_len >= 0; s1_len--)
	{
		int car = 0;
		int n1 = s1[s1_len] - '0';

		for (s2_len = _strlen(s2) - 1; s2_len >= 0; s2_len--)
		{
			int n2 = s2[s2_len] + '0';

			car = mul(res, r_len, s1_len + s2_len + 1, n1, n2 - '0');
			printf("n1=%s n2=%s\n", s1, s2);

		}

		if (car > 0)
			res[s1_len + s2_len + 1] += car;
	}

	for (i = 0; i < r_len - 1; i++)
	{
		if (res[i])
			pd = 1;

		if (pd)
			_putchar(res[i] + '0');
	}

	if (!pd)
		_putchar('0');

	_putchar('\n');
	free(res);

	return (0);
}

/**
 * _calloc - Custom function
 * @nmemb: Amount of elements of the array
 * @size: Bytes to allocate for each element
 *
 * Description: Allocates memory fo ran array using malloc
 * Return: A pointer to new allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (!arr)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}

/**
 * _atoi - Custom function
 * @s: pointer to an char to convert
 *
 * Description: Convert a given string into integer
 * Return: int - extracted number or 0
 */
int _atoi(char *s)
{
	int i, f, length, res, sign, dVal;

	i = 0;
	length = 0;
	dVal = 0;
	res = 0;
	sign = 0;
	f = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++sign;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dVal = s[i] - '0';

			if (sign % 2)
				dVal = -dVal;

			res = res * 10 + dVal;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}

		i++;
	}

	if (f == 0)
		return (0);

	return (res);
}

/**
 * _strlen - Custom function
 * @s: pointer to an char to count
 *
 * Description: Counts string
 * Return: int
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * _isNumber - Custom function
 * @str: string to check
 *
 * Description: Checks if a given string has only digits
 * Return: 1 if is a digit and 0 otherwise
 */
int _isNumber(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);

		str++;
	}

	return (1);
}

/**
 * _error - Custom Function
 * @msg: Message to print on error
 *
 * Description: Prints a error message and exit
 * Return: void
 */

void _error(const char *msg)
{
	printf("%s\n", msg);
	exit(98);
}

/**
 * mul - Custom Function
 * @res: Pointer to the multiplication result
 * @len: The length of result
 * @pos: Position in the result array
 * @num1: First number to multiply
 * @num2: Second number to multiply
 *
 * Description: Multiplies 2 positive numbers
 * Return: carry value
 */

int mul(int *res, int len, int pos, int num1, int num2)
{
	int car = 0, i;

	for (i = 0; i <= pos; i++)
	{
		int prod = res[i + pos] + (i < len ? num1 * num2 : 0) + car;

		res[i + pos] = prod % 10;
		car = prod / 10;
	}

	return (car);
}


