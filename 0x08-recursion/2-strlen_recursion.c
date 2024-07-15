#include "main.h"

/**
 * _strlen_recursion - Custom function
 * @s: pointer to a string to get its length
 *
 * Description: Get the length of the given string
 * Return: int | String length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
