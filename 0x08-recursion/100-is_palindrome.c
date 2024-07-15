#include "main.h"

/**
 * _length - Custom function
 * @str: The string to get its length
 *
 * Description: Get the length of the given string
 * Return: int | String length
 */
int _length(char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + _length(str + 1));
}

/**
 * _isPal - Custom function
 * @str: The string to check
 * @start: Begin of the string
 * @end: End of the string
 *
 * Description: Checks if a string is palindrome or not
 * Return: int | String length
 */
int _isPal(char *str, int start, int end)
{
	if (start >= end)
		return (1);

	if (str[start] != str[end - 1])
		return (0);

	return (_isPal(str, start + 1, end - 1));
}

/**
 * is_palindrome - Custom function
 * @s: The string to verify
 *
 * Description: Verifies if the given is palindrome
 * Return: int | 1 if the number is prime and 0 otherwise
 */
int is_palindrome(char *s)
{
	return (_isPal(s, 0, _length(s)));
}
