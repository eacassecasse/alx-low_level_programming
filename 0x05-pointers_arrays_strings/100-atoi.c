#include <stdio.h>
#include "main.h"

/**
 * _atoi - Custom function
 * @s: pointer to an char to convert
 *
 * Description: Convert a given string into integer
 * Return: int - extracted number or 0
 */
int _atoi(char *s)
{
	int i, length, res, sign;

	i = 0;
	length = 0;
	res = 0;
	sign = 1;

	while (s[length] != '\0')
		length++;

	while (i < length && s[i] == ' ')
		i++;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (i < length && s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}

	res *= sign;

	return (res);
}


